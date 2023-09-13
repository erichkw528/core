#include "global_planning/global_planner_interface.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "nav_msgs/msg/odometry.hpp"

namespace ROAR
{
    struct NavPlannerGlobalPathFinderInputs
    {
        nav_msgs::msg::Odometry::SharedPtr odom;
        geometry_msgs::msg::PoseStamped::SharedPtr goal_pose;
        nav_msgs::msg::OccupancyGrid::SharedPtr global_map;
    };

    struct NavPlannerGlobalPathFinderOutput
    {
        bool status;
        nav_msgs::msg::Path::SharedPtr global_path;
    };

    struct NavPlannerNextWaypointFinderInputs
    {
        nav_msgs::msg::Path::SharedPtr global_path;
        geometry_msgs::msg::PoseStamped::SharedPtr current_pose;
    };

    struct NavPlannerNextWaypointFinderOutputs
    {
        bool status;
        geometry_msgs::msg::PoseStamped::SharedPtr target_waypoint;
    };

    namespace GlobalPlanning
    {
        class NavPlanner : public GlobalPlannerInterface
        {
        public:
            NavPlanner(nav2_util::LifecycleNode *node);
            ~NavPlanner();
            void initialize();
            StepResult step(const StepInput input);

        protected:
            bool checkGlobalMap()
            {
                return m_global_map == nullptr ? false : true;
            }
            bool checkGoalWithinGlobalMap();

            bool checkVehicleStatus()
            {
                return m_odom == nullptr ? false : true;
            }

            NavPlannerGlobalPathFinderOutput planTrajectory(const NavPlannerGlobalPathFinderInputs &inputs);
            NavPlannerNextWaypointFinderOutputs findNextWaypoint(const NavPlannerNextWaypointFinderInputs &inputs);

            bool didReceiveGoalPose()
            {
                return m_goal_pose_stamped == nullptr ? false : true;
            }

            // declare subscriber for goal pose
            rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr m_goal_pose_subscriber;
            void onReceiveGoalPose(const geometry_msgs::msg::PoseStamped::SharedPtr msg)
            {
                m_goal_pose_stamped = msg;
                didGoalPoseUpdated = true;
            }

            rclcpp::Subscription<nav_msgs::msg::OccupancyGrid>::SharedPtr m_global_map_subscriber;
            void onReceiveGlobalMap(const nav_msgs::msg::OccupancyGrid::SharedPtr msg)
            {
                m_global_map = msg;
            }

            rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr m_odom_subscriber;
            void onReceiveOdom(const nav_msgs::msg::Odometry::SharedPtr msg)
            {
                m_odom = msg;
            }

        private:
            nav_msgs::msg::Path::SharedPtr m_global_path;
            geometry_msgs::msg::PoseStamped::SharedPtr m_next_waypoint_pose_stamped;

            geometry_msgs::msg::PoseStamped::SharedPtr m_goal_pose_stamped;
            bool didGoalPoseUpdated = false;

            nav_msgs::msg::OccupancyGrid::SharedPtr m_global_map;

            nav_msgs::msg::Odometry::SharedPtr m_odom;
        };
    }
} // namespace ROAR
