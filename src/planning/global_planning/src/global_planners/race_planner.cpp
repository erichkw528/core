#include "global_planning/global_planner_interface.hpp"
#include "global_planning/planners/race_planner.hpp"
#include <sstream>
#include <fstream>
#include <nav_msgs/msg/odometry.hpp>
namespace ROAR
{
    namespace GlobalPlanning
    {
        RacePlanner::RacePlanner(nav2_util::LifecycleNode *node) : GlobalPlannerInterface(node, "RacePlanner")
        {
            this->m_node_->declare_parameter("waypoint_path", "waypoints.txt");
            this->m_node_->declare_parameter("map_frame", "map");
            this->m_node_->declare_parameter("cross_track_error_config", "cte_config.txt");
            this->m_node_->declare_parameter("min_dist", 5.0);
            RCLCPP_INFO_STREAM(m_logger_, "cross_track_error_config: " << this->m_node_->get_parameter("cross_track_error_config").as_string());
            RCLCPP_INFO_STREAM(m_logger_, "Waypoint_path: " << this->m_node_->get_parameter("waypoint_path").as_string());
        }
        RacePlanner::~RacePlanner()
        {
        }

        void RacePlanner::initialize()
        {
            // read in waypoints from waypoints.txt
            this->read_waypoints(this->m_node_->get_parameter("waypoint_path").as_string());
            // this->read_cte_config(this->m_node_->get_parameter("cross_track_error_config").as_string());
        }

        StepResult RacePlanner::step(const StepInput input)
        {
            RCLCPP_DEBUG_STREAM(m_logger_, "-----");

            StepResult result;
            nav_msgs::msg::Odometry::SharedPtr odom = input.odom;

            // find the next waypoint
            size_t next_waypoint_index = this->findNextWaypoint(odom);
            // convert the next waypoint to a pose stamped
            geometry_msgs::msg::PoseStamped next_waypoint;
            next_waypoint.header = waypoints_[next_waypoint_index].header;
            next_waypoint.pose = waypoints_[next_waypoint_index].pose.pose;
            result.next_waypoint_pose_stamped = std::make_shared<geometry_msgs::msg::PoseStamped>(next_waypoint);

            // construct global path, if exist
            if (global_path_msg != nullptr)
            {
                result.global_path = global_path_msg;
            }

            return result;
        }

        void RacePlanner::read_cte_config(const std::string &file_path)
        {
            std::ifstream infile(file_path);

            if (!infile.is_open())
            {
                RCLCPP_ERROR(m_logger_, "Failed to open config file: %s", file_path.c_str());
                return;
            }

            // Skip the first line with column names
            std::string line;
            std::getline(infile, line);

            while (std::getline(infile, line))
            {
                std::istringstream iss(line);
                std::string cte_str, lookahead_str;

                // Extract each value from the comma-separated line
                if (!(std::getline(iss, cte_str, ',') &&
                      std::getline(iss, lookahead_str, ',')))
                {
                    RCLCPP_WARN(m_logger_, "Invalid config format: %s", line.c_str());
                    continue;
                }

                try
                {
                    // Convert the string values to floats
                    double cte = std::stod(cte_str);
                    double lookahead = std::stod(lookahead_str);
                    cte_config.push_back({cte, lookahead});
                }
                catch (const std::exception &ex)
                {
                    RCLCPP_ERROR(m_logger_, "Error parsing CTE config: %s", ex.what());
                }
            }
            // print cte config
            RCLCPP_INFO_STREAM(m_logger_, "CTE config: ");
            for (const auto &config : cte_config)
            {
                RCLCPP_INFO_STREAM(m_logger_, "CTE:" << config[0] << ", "
                                                     << " lookahead: " << config[1]);
            }
            infile.close();
        }

        size_t RacePlanner::findNextWaypoint(const nav_msgs::msg::Odometry::SharedPtr odom)
        {
            // find the closest waypoint to the current position
            double min_distance = std::numeric_limits<double>::max();
            size_t closest_waypoint_index = 0;
            for (size_t i = 0; i < waypoints_.size(); i++)
            {
                double distance = std::sqrt(std::pow(odom->pose.pose.position.x - waypoints_[i].pose.pose.position.x, 2) +
                                            std::pow(odom->pose.pose.position.y - waypoints_[i].pose.pose.position.y, 2) +
                                            std::pow(odom->pose.pose.position.z - waypoints_[i].pose.pose.position.z, 2));
                if (distance < min_distance)
                {
                    min_distance = distance;
                    closest_waypoint_index = i;
                }
            }
            RCLCPP_DEBUG_STREAM(m_logger_, "closest waypoint index: " << closest_waypoint_index << ", distance: " << min_distance);

            // given the min_distance, find the best cross track error to use
            // std::pair<double, double> cte_and_lookahead = calculateCTEAndLookahead(cte_config, min_distance);
            // RCLCPP_DEBUG_STREAM(m_logger_, "cte: " << cte_and_lookahead.first << ", lookahead: " << cte_and_lookahead.second);

            // find the next waypoint, including looping back to the beginning
            // double next_waypoint_dist = cte_and_lookahead.second;
            double next_waypoint_dist = float(this->m_node_->get_parameter("min_dist").as_double());
            size_t next_waypoint_index = closest_waypoint_index;
            for (size_t i = 0; i < waypoints_.size(); i++)
            {
                size_t next_index = (closest_waypoint_index + i) % waypoints_.size();
                double distance = std::sqrt(std::pow(odom->pose.pose.position.x - waypoints_[next_index].pose.pose.position.x, 2) +
                                            std::pow(odom->pose.pose.position.y - waypoints_[next_index].pose.pose.position.y, 2) +
                                            std::pow(odom->pose.pose.position.z - waypoints_[next_index].pose.pose.position.z, 2));
                if (distance > next_waypoint_dist)
                {
                    next_waypoint_index = next_index;
                    break;
                }
            }
            RCLCPP_DEBUG_STREAM(m_logger_, "next waypoint index: " << next_waypoint_index << ", next_waypoint_dist: " << next_waypoint_dist);
            return next_waypoint_index;
        }

        void RacePlanner::read_waypoints(const std::string &file_path)
        {
            std::ifstream infile(file_path);

            if (!infile.is_open())
            {
                RCLCPP_ERROR(m_logger_, "Failed to open waypoints file: %s", file_path.c_str());
                return;
            }

            // Skip the first line with column names
            std::string line;
            std::getline(infile, line);

            while (std::getline(infile, line))
            {
                std::istringstream iss(line);
                std::string timestamp_str, frame_id_str, child_frame_id_str,
                    x_str, y_str, z_str,
                    qx_str, qy_str, qz_str, qw_str,
                    vx_str, vy_str, vz_str,
                    wx_str, wy_str, wz_str;

                // Extract each value from the comma-separated line
                if (!(std::getline(iss, timestamp_str, ',') &&
                      std::getline(iss, frame_id_str, ',') &&
                      std::getline(iss, child_frame_id_str, ',') &&
                      std::getline(iss, x_str, ',') &&
                      std::getline(iss, y_str, ',') &&
                      std::getline(iss, z_str, ',') &&
                      std::getline(iss, qx_str, ',') &&
                      std::getline(iss, qy_str, ',') &&
                      std::getline(iss, qz_str, ',') &&
                      std::getline(iss, qw_str, ',') &&
                      std::getline(iss, vx_str, ',') &&
                      std::getline(iss, vy_str, ',') &&
                      std::getline(iss, vz_str, ',') &&
                      std::getline(iss, wx_str, ',') &&
                      std::getline(iss, wy_str, ',') &&
                      std::getline(iss, wz_str, ',')))
                {
                    RCLCPP_WARN(m_logger_, "Invalid waypoint format: %s", line.c_str());
                    continue;
                }

                try
                {
                    // Convert the string values to floats
                    double x = std::stod(x_str);
                    double y = std::stod(y_str);
                    double z = std::stod(z_str);
                    double qx = std::stod(qx_str);
                    double qy = std::stod(qy_str);
                    double qz = std::stod(qz_str);
                    double qw = std::stod(qw_str);
                    double vx = std::stod(vx_str);
                    double vy = std::stod(vy_str);
                    double vz = std::stod(vz_str);
                    double wx = std::stod(wx_str);
                    double wy = std::stod(wy_str);
                    double wz = std::stod(wz_str);

                    nav_msgs::msg::Odometry waypoint;
                    waypoint.header.stamp = rclcpp::Time(std::stod(timestamp_str));
                    waypoint.header.frame_id = frame_id_str;
                    waypoint.child_frame_id = child_frame_id_str;
                    waypoint.pose.pose.position.x = x;
                    waypoint.pose.pose.position.y = y;
                    waypoint.pose.pose.position.z = z;
                    waypoint.pose.pose.orientation.x = qx;
                    waypoint.pose.pose.orientation.y = qy;
                    waypoint.pose.pose.orientation.z = qz;
                    waypoint.pose.pose.orientation.w = qw;
                    waypoint.twist.twist.linear.x = vx;
                    waypoint.twist.twist.linear.y = vy;
                    waypoint.twist.twist.linear.z = vz;
                    waypoint.twist.twist.angular.x = wx;
                    waypoint.twist.twist.angular.y = wy;
                    waypoint.twist.twist.angular.z = wz;

                    waypoints_.push_back(waypoint);
                }
                catch (const std::exception &ex)
                {
                    RCLCPP_ERROR(m_logger_, "Error parsing waypoint: %s", ex.what());
                }
            }
            RCLCPP_INFO(m_logger_, "Loaded %lu waypoints", waypoints_.size());

            // fill in global_path_msg if waypoints_ is not empty
            if (waypoints_.size() > 0)
            {
                global_path_msg = std::make_shared<nav_msgs::msg::Path>();
                global_path_msg->header.frame_id = this->m_node_->get_parameter("map_frame").as_string();
                global_path_msg->header.stamp = m_node_->now();
                global_path_msg->poses.resize(waypoints_.size());
                for (size_t i = 0; i < waypoints_.size(); i++)
                {
                    global_path_msg->poses[i].header = waypoints_[i].header;
                    global_path_msg->poses[i].pose = waypoints_[i].pose.pose;
                }
            }
            infile.close();
        }
    }
}