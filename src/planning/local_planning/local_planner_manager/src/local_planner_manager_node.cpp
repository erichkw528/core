#include "local_planner_manager/local_planner_manager_node.hpp"
#include "local_planner_manager/local_planner_manager_state.hpp"
namespace roar
{
  namespace planning
  {
    namespace local
    {
      LocalPlannerManagerNode::LocalPlannerManagerNode() : LifecycleNode("manager", "local_planner", true), m_plugin_loader_("local_planner_manager", "roar::planning::local::LocalPlannerPlugin")
      {
        m_config_ = std::make_shared<LocalPlannerManagerConfig>(
            LocalPlannerManagerConfig{
                declare_parameter<bool>("manager.debug", false),
                declare_parameter<double>("manager.loop_rate", 20.0)});

        if (m_config_->debug)
        {
          bool _ = rcutils_logging_set_logger_level(get_logger().get_name(),
                                                    RCUTILS_LOG_SEVERITY_DEBUG); // enable or disable debug
        }

        this->declare_parameter("controller_route", "/roar/controller_manager");
        this->controllerServerRoute = this->get_parameter("controller_route").as_string();

        RCLCPP_INFO(this->get_logger(), "LocalPlannerManagerNode initialized with Debug Mode = [%s]",
                    m_config_->debug ? "YES" : "NO");
        RCLCPP_INFO(this->get_logger(), "controller route: [%s]", this->controllerServerRoute.c_str());

        // initialize plugins
        const auto plugin_names = declare_parameter("plugins", std::vector<std::string>{});
        RCLCPP_INFO_STREAM(this->get_logger(), "plugin_names: " << plugin_names.size() << " plugins");
        for (const auto &plugin_name : plugin_names)
        {
          LocalPlannerPlugin::SharedPtr new_plugin = m_plugin_loader_.createSharedInstance(plugin_name);
          m_plugins_.push_back(new_plugin);
          RCLCPP_DEBUG_STREAM(this->get_logger(), "plugin: " << plugin_name << " loaded");
        }
        std::for_each(
            m_plugins_.begin(), m_plugins_.end(), [this](LocalPlannerPlugin::SharedPtr &p)
            { 
                p->initialize(this);
                RCLCPP_DEBUG_STREAM(this->get_logger(), "plugin: " << p->get_plugin_name() << " initialized"); });
        std::for_each(
            m_plugins_.begin(), m_plugins_.end(), [this](LocalPlannerPlugin::SharedPtr &p)
            { 
                p->configure(m_config_);
                RCLCPP_DEBUG_STREAM(this->get_logger(), "plugin: " << p->get_plugin_name() << " configured"); });
        m_state_ = LocalPlannerManagerState{};
      }
      LocalPlannerManagerNode ::~LocalPlannerManagerNode()
      {
      }

      /**
       * lifecycle
       */
      nav2_util::CallbackReturn LocalPlannerManagerNode::on_configure(const rclcpp_lifecycle::State &state)
      {
        RCLCPP_DEBUG(this->get_logger(), "on_configure");

        this->next_waypoint_publisher_ = this->create_publisher<geometry_msgs::msg::PoseStamped>(
            std::string{get_namespace()} + "/next_waypoint", 10);

        this->odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/odometry", rclcpp::SystemDefaultsQoS(),
            std::bind(&LocalPlannerManagerNode::onLatestOdomReceived, this, std::placeholders::_1));

        this->footprint_sub_ = this->create_subscription<geometry_msgs::msg::PolygonStamped>(
            "/footprint", rclcpp::SystemDefaultsQoS(),
            std::bind(&LocalPlannerManagerNode::onLatestFootprintReceived, this, std::placeholders::_1));
        this->occupancy_map_sub_ = this->create_subscription<nav_msgs::msg::OccupancyGrid>(
            "/occupancy_map", rclcpp::SystemDefaultsQoS(),
            std::bind(&LocalPlannerManagerNode::onLatestOccupancyMapReceived, this, std::placeholders::_1));

        this->global_plan_sub_ = this->create_subscription<nav_msgs::msg::Path>(
            "/global_path", rclcpp::SystemDefaultsQoS(),
            std::bind(&LocalPlannerManagerNode::onLatestGlobalPlanReceived, this, std::placeholders::_1));

        this->control_action_client_ = rclcpp_action::create_client<ControlAction>(this, this->controllerServerRoute);

        // diagnostic server
        diagnostic_pub_ = this->create_publisher<diagnostic_msgs::msg::DiagnosticArray>(
            "/diagnostics", 10);

        return nav2_util::CallbackReturn::SUCCESS;
      }
      nav2_util::CallbackReturn LocalPlannerManagerNode::on_activate(const rclcpp_lifecycle::State &state)
      {
        RCLCPP_DEBUG(this->get_logger(), "on_activate");
        RCLCPP_DEBUG(this->get_logger(), "loop_rate: %.3f", m_config_->loop_rate);
        this->execution_timer = this->create_wall_timer(
            std::chrono::milliseconds(int(this->m_config_->loop_rate)),
            std::bind(&LocalPlannerManagerNode::execute, this));
        this->diagnostic_pub_->on_activate();

        this->next_waypoint_publisher_->on_activate();

        return nav2_util::CallbackReturn::SUCCESS;
      }
      nav2_util::CallbackReturn LocalPlannerManagerNode::on_deactivate(const rclcpp_lifecycle::State &state)
      {
        RCLCPP_DEBUG(this->get_logger(), "on_deactivate");
        execute_timer->cancel();
        diagnostic_pub_->on_deactivate();
        this->next_waypoint_publisher_->on_deactivate();
        return nav2_util::CallbackReturn::SUCCESS;
      }
      nav2_util::CallbackReturn LocalPlannerManagerNode::on_cleanup(const rclcpp_lifecycle::State &state)
      {
        RCLCPP_DEBUG(this->get_logger(), "on_cleanup");
        this->odom_sub_ = nullptr;

        return nav2_util::CallbackReturn::SUCCESS;
      }
      nav2_util::CallbackReturn LocalPlannerManagerNode::on_shutdown(const rclcpp_lifecycle::State &state)
      {
        RCLCPP_DEBUG(this->get_logger(), "on_shutdown");
        return nav2_util::CallbackReturn::SUCCESS;
      }

      /**
       * Controller interaction
       */
      void LocalPlannerManagerNode::control_send_goal(const nav_msgs::msg::Path::SharedPtr path, float target_spd)
      {
        RCLCPP_DEBUG(get_logger(), "sending goal to controller at [%s]", this->controllerServerRoute.c_str());

        using namespace std::placeholders;

        if (!this->control_action_client_->wait_for_action_server())
        {
          RCLCPP_ERROR(this->get_logger(),
                       "Control action server not available, "
                       "not sending goal to controller");
          return;
        }
        auto goal_msg = ControlAction::Goal();
        goal_msg.path = *path;
        goal_msg.target_spd = target_spd;
        goal_msg.overwrite_previous = true;

        // RCLCPP_INFO(this->get_logger(), "Executing local path - len(path)=[%d] |
        // target_spd=[%f]",path->poses.size() ,target_spd);

        auto send_goal_options = rclcpp_action::Client<ControlAction>::SendGoalOptions();
        send_goal_options.goal_response_callback =
            std::bind(&LocalPlannerManagerNode::control_action_goal_response_callback, this, _1);
        send_goal_options.feedback_callback =
            std::bind(&LocalPlannerManagerNode::control_action_feedback_callback, this, _1, _2);
        send_goal_options.result_callback = std::bind(&LocalPlannerManagerNode::control_action_result_callback, this, _1);
        this->control_action_client_->async_send_goal(goal_msg, send_goal_options);
      }
      void LocalPlannerManagerNode::control_action_goal_response_callback(std::shared_future<GoalHandleControlAction::SharedPtr> future)
      {
        auto goal_handle = future.get();
        auto diag_array_msg = std::make_unique<diagnostic_msgs::msg::DiagnosticArray>();
        diag_array_msg->header.stamp = this->now();
        diagnostic_msgs::msg::DiagnosticStatus::SharedPtr diag_status_msg = std::make_shared<diagnostic_msgs::msg::DiagnosticStatus>();
        diag_status_msg->name = std::string(this->get_namespace()) + "/" +
                                std::string(this->get_name());

        if (!goal_handle)
        {
          diag_status_msg->level = diagnostic_msgs::msg::DiagnosticStatus::ERROR;
          diag_status_msg->message = "Goal was rejected by server";
          diag_array_msg->status.push_back(*diag_status_msg);
          diagnostic_pub_->publish(std::move(diag_array_msg));
        }
        else
        {
          diag_status_msg->level = diagnostic_msgs::msg::DiagnosticStatus::OK;
          diag_status_msg->message = "Goal accepted by server, waiting for result";
          diag_array_msg->status.push_back(*diag_status_msg);
          diagnostic_pub_->publish(std::move(diag_array_msg));
        }
      }
      void LocalPlannerManagerNode::control_action_feedback_callback(GoalHandleControlAction::SharedPtr future, const std::shared_ptr<const ControlAction::Feedback> feedback)
      {
        // Left empty on purpose
        RCLCPP_DEBUG(get_logger(), "Currently at waypoint index: [{%d}]", feedback->curr_index);
      }
      void LocalPlannerManagerNode::control_action_result_callback(const GoalHandleControlAction::WrappedResult &result)
      {
        this->num_execution -= 1;

        switch (result.code)
        {
        case rclcpp_action::ResultCode::SUCCEEDED:
          RCLCPP_DEBUG(this->get_logger(), "control_action result success received");
          break;
        case rclcpp_action::ResultCode::ABORTED:
          RCLCPP_DEBUG(this->get_logger(), "control_action goal was aborted");
          break;
        case rclcpp_action::ResultCode::CANCELED:
          RCLCPP_DEBUG(this->get_logger(), "control_action goal was canceled");
          break;
        default:
          RCLCPP_ERROR(this->get_logger(), "control_action unknown result code");
          break;
        }
      }

      bool LocalPlannerManagerNode::canExecute()
      {
        if (this->didReceiveAllMessages() == false)
        {
          RCLCPP_DEBUG_STREAM(this->get_logger(), "not executing: "
                                                      << "didReceiveAllMessages() == false");
          return false;
        }
        return true;
      }
      bool LocalPlannerManagerNode::didReceiveAllMessages()
      {
        bool isOK = true;
        if (this->m_state_.odom == nullptr)
        {
          RCLCPP_DEBUG(this->get_logger(), "odom not received, not executing...");
          isOK = false;
        }
        if (this->m_state_.robot_footprint == nullptr)
        {
          RCLCPP_DEBUG(this->get_logger(), "latest_footprint_ not received, not executing...");
          isOK = false;
        }
        if (this->m_state_.global_plan == nullptr)
        {
          RCLCPP_DEBUG(this->get_logger(), "global_plan_ not received, not executing...");
          isOK = false;
        }
        if (this->m_state_.occupancy_map == nullptr)
        {
          RCLCPP_DEBUG(this->get_logger(), "occupancy_map_ not received, not executing...");
          isOK = false;
        }
        return isOK;
      }

      /**
       * helper methods
       */
      void LocalPlannerManagerNode::execute()
      {
        RCLCPP_DEBUG(this->get_logger(), "-----LocalPlannerManagerNode START -----");
        if (this->canExecute()) // only one request at a time
        {
          // geometry_msgs::msg::PoseStamped::SharedPtr next_waypoint = this->findNextWaypoint(float(5.0));
          // if (next_waypoint == nullptr)
          // {
          //   RCLCPP_DEBUG_STREAM(this->get_logger(), "next_waypoint is null, not executing...");
          //   return;
          // }
          // RCLCPP_DEBUG_STREAM(this->get_logger(), "next waypoint: x:" << next_waypoint->pose.position.x << " y: " << next_waypoint->pose.position.y << " z: " << next_waypoint->pose.position.z);

          // this->next_waypoint_publisher_->publish(*next_waypoint);

          // num_execution += 1;
        }
        RCLCPP_DEBUG(this->get_logger(), "");
      }
    } // local
  }   // planning
} // roar
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<roar::planning::local::LocalPlannerManagerNode>();

  rclcpp::spin(node->get_node_base_interface());
  rclcpp::shutdown();

  return 0;
}