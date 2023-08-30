#include <controller_manager/controller_manager_ros.hpp>
#include <controller_manager/pid_controller.hpp>
#include <rclcpp/node_interfaces/node_base_interface.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp_lifecycle/state.hpp>

namespace controller
{
    ControllerManagerNode::ControllerManagerNode()
        : LifecycleNode("manager", "controller", true), m_plugin_loader_("controller_manager", "roar::control")

    {
        this->declare_parameter("debug", false);
        this->declare_parameter("loop_rate", 10.0);
        this->declare_parameter("target_speed", 5.0);
        this->declare_parameter("base_link_frame", "base_link");
        this->declare_parameter("map_frame", "map");
        this->declare_parameter("min_distance", 5.0);
        // initialize plugins
        const auto plugin_names = declare_parameter("plugins", std::vector<std::string>{});
        for (const auto &plugin_name : plugin_names)
        {
            roar::control::ControllerPlugin::SharedPtr new_plugin = m_plugin_loader_.createSharedInstance(plugin_name);
            m_plugins_.push_back(new_plugin);
        }
        std::for_each(
            m_plugins_.begin(), m_plugins_.end(), [this](roar::control::ControllerPlugin::SharedPtr &p)
            { p->initialize(this); });
        std::for_each(
            m_plugins_.begin(), m_plugins_.end(), [this](roar::control::ControllerPlugin::SharedPtr &p)
            { p->configure(); });

        if (this->get_parameter("debug").as_bool())
        {
            bool _ = rcutils_logging_set_logger_level(get_logger().get_name(),
                                                      RCUTILS_LOG_SEVERITY_DEBUG); // enable or disable debug
            _ = rcutils_logging_set_logger_level("controller.manager.rclcpp_action",
                                                 RCUTILS_LOG_SEVERITY_FATAL); // enable or disable debug
        }

        RCLCPP_INFO(this->get_logger(),
                    "ControllerManagerNode initialized with Debug Mode = [%s]",
                    this->get_parameter("debug").as_bool() ? "YES" : "NO");
    }

    ControllerManagerNode ::~ControllerManagerNode()
    {
        if (this->execution_timer)
        {
            this->execution_timer->cancel();
        }
    }

    /**
     * Lifecycles
     */
    nav2_util::CallbackReturn
    ControllerManagerNode::on_configure(const rclcpp_lifecycle::State &state)
    {
        RCLCPP_DEBUG(get_logger(), "on_configure");

        // action server
        this->action_server_ = rclcpp_action::create_server<ControlAction>(
            this,
            std::string(this->get_namespace()) + "/" +
                std::string(this->get_name()),
            std::bind(&ControllerManagerNode::handle_goal, this,
                      std::placeholders::_1, std::placeholders::_2),
            std::bind(&ControllerManagerNode::handle_cancel, this,
                      std::placeholders::_1),
            std::bind(&ControllerManagerNode::handle_accepted, this,
                      std::placeholders::_1));
        this->execution_timer = this->create_wall_timer(
            std::chrono::milliseconds(50),
            std::bind(&ControllerManagerNode::execution_callback, this));

        // safety switch
        this->control_safety_switch_ = this->create_service<roar_msgs::srv::ToggleControlSafetySwitch>(std::string(this->get_namespace()) + "/" +
                                                                                                           std::string(this->get_name()) + "/safety_toggle",
                                                                                                       std::bind(&ControllerManagerNode::toggle_safety_switch, this, std::placeholders::_1, std::placeholders::_2));
        // diagnostic
        diagnostic_pub_ = this->create_publisher<diagnostic_msgs::msg::DiagnosticArray>(
            "/diagnostics", 10);
        // tf buffer
        tf_buffer_ =
            std::make_unique<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ =
            std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
        // output publisher
        this->vehicle_control_publisher_ = this->create_publisher<roar_msgs::msg::VehicleControl>("vehicle_control", 10);

        // plugins

        RCLCPP_DEBUG(get_logger(), "configured");

        return nav2_util::CallbackReturn::SUCCESS;
    }
    nav2_util::CallbackReturn
    ControllerManagerNode::on_activate(const rclcpp_lifecycle::State &state)
    {
        RCLCPP_DEBUG(get_logger(), "on_activate");
        this->vehicle_control_publisher_->on_activate();
        RCLCPP_DEBUG(get_logger(), "activated");
        return nav2_util::CallbackReturn::SUCCESS;
    }
    nav2_util::CallbackReturn
    ControllerManagerNode::on_deactivate(const rclcpp_lifecycle::State &state)
    {
        RCLCPP_DEBUG(get_logger(), "on_deactivate");
        this->vehicle_control_publisher_->on_deactivate();
        return nav2_util::CallbackReturn::SUCCESS;
    }
    nav2_util::CallbackReturn
    ControllerManagerNode::on_cleanup(const rclcpp_lifecycle::State &state)
    {
        RCLCPP_DEBUG(get_logger(), "on_cleanup");
        return nav2_util::CallbackReturn::SUCCESS;
    }
    nav2_util::CallbackReturn
    ControllerManagerNode::on_shutdown(const rclcpp_lifecycle::State &state)
    {
        RCLCPP_DEBUG(get_logger(), "on_shutdown");
        return nav2_util::CallbackReturn::SUCCESS;
    }

    /**
     * Action server
     */
    rclcpp_action::GoalResponse ControllerManagerNode::handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const ControlAction::Goal> goal)
    {
        auto diag_array_msg = std::make_unique<diagnostic_msgs::msg::DiagnosticArray>();
        diag_array_msg->header.stamp = this->now();
        diagnostic_msgs::msg::DiagnosticStatus::SharedPtr diag_status_msg = std::make_shared<diagnostic_msgs::msg::DiagnosticStatus>();
        diag_status_msg->name = std::string(this->get_namespace()) + "/" +
                                std::string(this->get_name());

        if (this->is_safety_on == false)
        {
            diag_status_msg->level = diagnostic_msgs::msg::DiagnosticStatus::WARN;
            diag_status_msg->message = "rejecting goal - safety switch is off";
            diag_array_msg->status.push_back(*diag_status_msg);
            diagnostic_pub_->publish(std::move(diag_array_msg));

            return rclcpp_action::GoalResponse::REJECT;
        }
        if (this->active_goal_ != nullptr)
        {
            diag_status_msg->level = diagnostic_msgs::msg::DiagnosticStatus::WARN;
            diag_status_msg->message = "rejecting goal - goal already in progress";
            diag_array_msg->status.push_back(*diag_status_msg);
            diagnostic_pub_->publish(std::move(diag_array_msg));
            return rclcpp_action::GoalResponse::REJECT;
        }
        if (goal->path.poses.size() == 0)
        {
            diag_status_msg->level = diagnostic_msgs::msg::DiagnosticStatus::WARN;
            diag_status_msg->message = "rejecting goal - path is empty";
            diag_array_msg->status.push_back(*diag_status_msg);
            diagnostic_pub_->publish(std::move(diag_array_msg));
            return rclcpp_action::GoalResponse::REJECT;
        }
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse ControllerManagerNode::handle_cancel(
        const std::shared_ptr<GoalHandleControlAction> goal_handle)
    {
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void ControllerManagerNode::handle_accepted(
        const std::shared_ptr<GoalHandleControlAction> goal_handle)
    {
        active_goal_ = goal_handle;
    }

    /**
     * main execution loops
     */
    void ControllerManagerNode::execution_callback()
    {
        if (this->active_goal_ != nullptr)
        {
            this->p_execute(active_goal_);
        }

        if (this->is_safety_on == false)
        {
            this->vehicle_control_publisher_->publish(neutralControlMsg);
        }
    }

    void ControllerManagerNode::p_execute(
        const std::shared_ptr<GoalHandleControlAction> goal_handle)
    {
        RCLCPP_DEBUG(get_logger(), "------ controller manager ------");
        std::lock_guard<std::mutex> lock(active_goal_mutex_);
        // get path from goal
        nav_msgs::msg::Path path = goal_handle->get_goal()->path;

        // transform path to ego centric frame
        nav_msgs::msg::Path egoCentricPath = this->p_transformToEgoCentric(path);
        if (egoCentricPath.poses.size() == 0)
        {
            RCLCPP_ERROR(get_logger(), "rejecting goal - path is empty or failed to transform to target frame");
            auto result = std::make_shared<ControlAction::Result>();
            result->status = control_interfaces::action::Control::Result::FAILED;
            goal_handle->succeed(result);
            active_goal_ = nullptr; // release lock
            return;
        }

        // find the next waypoint that is min_executable_dist away
        int nextWaypointIndex = this->p_findNextWaypoint(egoCentricPath);
        RCLCPP_DEBUG(get_logger(), "found next waypoint at index %d", nextWaypointIndex);
        if (nextWaypointIndex > egoCentricPath.poses.size() - 1)
        {
            RCLCPP_ERROR(get_logger(), "rejecting goal - unable to find steering angle");
            auto result = std::make_shared<ControlAction::Result>();
            result->status = control_interfaces::action::Control::Result::FAILED;
            goal_handle->succeed(result);
            active_goal_ = nullptr; // release lock
            return;
        }

        // construct control msg
        roar_msgs::msg::VehicleControl controlMsg;

        // find the steering needed to reach that position
        double steeringAngle = this->p_findSteeringAngle(egoCentricPath, nextWaypointIndex);
        controlMsg.steering_angle = float(steeringAngle);

        // assign target_speed
        controlMsg.target_speed = float(this->get_parameter("target_speed").as_double());

        // publish control
        this->vehicle_control_publisher_->publish(controlMsg);

        auto result = std::make_shared<ControlAction::Result>();
        result->status = control_interfaces::action::Control::Result::NORMAL;
        goal_handle->succeed(result);
        active_goal_ = nullptr; // release lock
        return;
    }

    nav_msgs::msg::Path ControllerManagerNode::p_transformToEgoCentric(nav_msgs::msg::Path path)
    {
        std::string target_frame = this->get_parameter("base_link_frame").as_string();
        std::string fromFrameRel = path.header.frame_id == "" ? this->get_parameter("map_frame").as_string() : path.header.frame_id;
        std::string toFrameRel = target_frame;

        // Get the current pose of the robot (ego vehicle) in the target frame
        geometry_msgs::msg::PoseStamped ego_pose;
        ego_pose.header.frame_id = target_frame;
        ego_pose.pose.orientation.w = 1.0; // Assuming the orientation is identity

        nav_msgs::msg::Path transformed_path;

        // Transform each pose in the path to the ego-centric frame
        for (auto &pose : path.poses)
        {
            try
            {
                geometry_msgs::msg::TransformStamped t;
                t = tf_buffer_->lookupTransform(toFrameRel, fromFrameRel, tf2::TimePointZero);
                geometry_msgs::msg::PoseStamped transformOut;

                tf2::doTransform(pose, transformOut, t);
                transformed_path.poses.push_back(transformOut); // Add the transformed pose to the new path
            }
            catch (tf2::TransformException &ex)
            {
                // Handle the exception if the transform is not available
                // (e.g., if the required transformation is not in the tf tree)
                // You can choose to skip or abort the transformation for this pose.
                RCLCPP_WARN(this->get_logger(), "Failed to transform pose: %s", ex.what());
            }
        }

        RCLCPP_DEBUG(get_logger(), "transformed path size: %d", transformed_path.poses.size());
        // print every x, y of every pose in the path
        for (auto &pose : transformed_path.poses)
        {
            RCLCPP_DEBUG(get_logger(), "x: %f, y: %f", pose.pose.position.x, pose.pose.position.y); // TODO: figure out why this is wrong here
        }

        return transformed_path;
    }
    int ControllerManagerNode::p_findNextWaypoint(nav_msgs::msg::Path path)
    {
        float min_dist = this->get_parameter("min_distance").as_double();
        int next_waypoint = 0;
        for (int i = 0; i < path.poses.size(); i++)
        {
            float dist = sqrt(pow(path.poses[i].pose.position.x, 2) + pow(path.poses[i].pose.position.y, 2));
            if (dist > min_dist)
            {
                next_waypoint = i;
                break;
            }
        }
        return next_waypoint;
    }
    double ControllerManagerNode::p_findSteeringAngle(nav_msgs::msg::Path path, int next_waypoint)
    {
        double steering_angle = 0.0;
        if (next_waypoint <= path.poses.size() - 1)
        {
            steering_angle = -1 * atan2(path.poses[next_waypoint].pose.position.y, path.poses[next_waypoint].pose.position.x);

            // rad to deg
            steering_angle = steering_angle * 180 / M_PI;
        }
        RCLCPP_DEBUG(get_logger(), "steering angle: %f", steering_angle);
        return steering_angle;
    }

    void ControllerManagerNode::toggle_safety_switch(const std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch::Request> request,
                                                     std::shared_ptr<roar_msgs::srv::ToggleControlSafetySwitch::Response> response)
    {
        this->is_safety_on = request->is_safety_on;
        response->status = this->is_safety_on;

        RCLCPP_INFO(this->get_logger(), "Safety switch is %s", this->is_safety_on ? "ON" : "OFF");
    }
} // namespace controller
