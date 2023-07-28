#include <cstdio>
#include "global_planning/global_planner_node.hpp"
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <cmath> // For sqrt and atan2 functions
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

namespace roar
{
  namespace global_planning
  {
    double calculateDistance(double x1, double y1, double x2, double y2)
    {
      double dx = x2 - x1;
      double dy = y2 - y1;
      return std::sqrt(dx * dx + dy * dy);
    }

    GlobalPlannerNode::GlobalPlannerNode() : nav2_util::LifecycleNode("global_planner_node")
    {
      // Constructor logic, if any
      this->declare_parameter("debug", false);
      if (this->get_parameter("debug").as_bool())
      {
        auto ret = rcutils_logging_set_logger_level(get_logger().get_name(), RCUTILS_LOG_SEVERITY_DEBUG); // enable or disable debug
      }
      this->declare_parameter("datum", "0.0,0.0,0.0");
      this->declare_parameter("gnss_file_path", "./data/some_data.txt");
      this->declare_parameter("next_waypoint_distance_threshold", 5.0);
      this->declare_parameter("loop_rate_millis", 100);
      this->declare_parameter("map_frame", "map");
    }

    GlobalPlannerNode::~GlobalPlannerNode()
    {
      // Destructor logic, if any
      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is destroyed.");
    }
    nav2_util::CallbackReturn GlobalPlannerNode::on_configure(const rclcpp_lifecycle::State &state)
    {
      this->next_waypoint_distance_threshold_ = this->get_parameter("next_waypoint_distance_threshold").as_double();

      this->parse_datum();

      this->global_path_publisher_timer_ = this->create_wall_timer(std::chrono::milliseconds(get_parameter("loop_rate_millis").as_int()),
                                                                   std::bind(&GlobalPlannerNode::timer_callback, this));
      this->next_waypoint_publisher_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("next_waypoint", 10);
      this->global_path_publisher_ = this->create_publisher<nav_msgs::msg::Path>("global_path", 10);
      this->nav_sat_fix_subscriber_ = this->create_subscription<sensor_msgs::msg::NavSatFix>("/roar/gnss", 10,
                                                                                             std::bind(&GlobalPlannerNode::onGnssReceived, this, std::placeholders::_1));
      // read in waypoints in gnss format
      std::string gnss_file_path = this->get_parameter("gnss_file_path").as_string();
      gnss_waypoints_ = read_gnss_waypoints(gnss_file_path);
      RCLCPP_INFO(get_logger(), "Read [%zu] waypoints from file: [%s]", gnss_waypoints_.size(), gnss_file_path.c_str());

      // parse all waypoints to local coordinates
      local_waypoints_.clear(); // Clear the local_waypoints_ vector if needed
      for (const auto &gnss_waypoint : gnss_waypoints_)
      {
        CartesianPosition local_waypoint;
        convert_gnss_to_local_cartesian(gnss_waypoint, local_waypoint);
        local_waypoints_.push_back(local_waypoint);
      }
      RCLCPP_INFO(get_logger(), "Converted [%zu] waypoints to local coordinates.", local_waypoints_.size());

      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is now configured.");
      return nav2_util::CallbackReturn::SUCCESS;
    }

    nav2_util::CallbackReturn GlobalPlannerNode::on_activate(const rclcpp_lifecycle::State &state)
    {
      // Custom activation logic goes here
      this->next_waypoint_publisher_->on_activate();
      this->global_path_publisher_->on_activate();
      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is now active.");

      return nav2_util::CallbackReturn::SUCCESS;
    }

    nav2_util::CallbackReturn GlobalPlannerNode::on_deactivate(const rclcpp_lifecycle::State &state)
    {
      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is now inactive.");
      // Custom deactivation logic goes here

      this->next_waypoint_publisher_->on_deactivate();
      this->global_path_publisher_->on_deactivate();

      return nav2_util::CallbackReturn::SUCCESS;
    }

    nav2_util::CallbackReturn GlobalPlannerNode::on_cleanup(const rclcpp_lifecycle::State &state)
    {
      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is now cleaned up.");
      // Custom cleanup logic goes here
      return nav2_util::CallbackReturn::SUCCESS;
    }

    nav2_util::CallbackReturn GlobalPlannerNode::on_shutdown(const rclcpp_lifecycle::State &state)
    {
      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is now shutting down.");
      // Custom shutdown logic goes here
      return nav2_util::CallbackReturn::SUCCESS;
    }

    void GlobalPlannerNode::onGnssReceived(const sensor_msgs::msg::NavSatFix::SharedPtr msg)
    {
      // RCLCPP_DEBUG(get_logger(), "---------------------");
      // For example, you can extract the latitude, longitude, and altitude from the message
      GeodeticPosition p({msg->latitude, msg->longitude, msg->altitude});
      // RCLCPP_DEBUG(get_logger(), "Received GNSS data: %.6f, %.6f, %.6f", p.latitude, p.longitude, p.altitude);

      // convert to local coordinate
      CartesianPosition local_position;
      convert_gnss_to_local_cartesian(p, local_position);
      // RCLCPP_DEBUG(get_logger(), "Converted to local coordinate: %.6f, %.6f, %.6f", local_position.x, local_position.y, local_position.z);

      if (this->last_waypoint_index == -1)
      {
        // this is the first iteration, find the vehicle's closest waypoint
        this->last_waypoint_index = findClosestWaypoint(local_position);
        return;
      }
      /**
       * If it is not for locating where the vehicle is on the map
       * 1. find the immediate index of the next waypoint that is next_waypoint_distance_threshold_ away from the vehicle
       * 2. find the next index of the waypoint that is next_waypoint_distance_threshold_ away from step 1
       * 3. find the angle between step 1 and step 2
       * 4. assign the position of the waypoint in step 1 and angle difference computed from step 3 to next_waypoint_
       */
      // next iterations, find the waypoint that is next_waypoint_distance_threshold_ away from the vehicle
      size_t next_waypoint_index = this->last_waypoint_index;
      while (true)
      {
        double distance = roar::global_planning::calculateDistance(local_position.x,
                                                                   local_position.y,
                                                                   local_waypoints_[next_waypoint_index].x,
                                                                   local_waypoints_[next_waypoint_index].y);
        if (distance > this->next_waypoint_distance_threshold_)
        {
          break;
        }
        next_waypoint_index = (next_waypoint_index + 1) % local_waypoints_.size();
      }
      this->last_waypoint_index = next_waypoint_index;

      size_t next_next_waypoint_index = next_waypoint_index + 1;
      // RCLCPP_DEBUG(get_logger(), "Next waypoint index: %d", next_waypoint_index);

      // find the next waypoint that is next_waypoint_distance_threshold_ away from last_waypoint_index
      while (true)
      {
        double distance = roar::global_planning::calculateDistance(local_waypoints_[next_waypoint_index].x,
                                                                   local_waypoints_[next_waypoint_index].y,
                                                                   local_waypoints_[next_next_waypoint_index].x,
                                                                   local_waypoints_[next_next_waypoint_index].y);
        if (distance > this->next_waypoint_distance_threshold_)
        {
          break;
        }
        next_next_waypoint_index = (next_next_waypoint_index + 1) % local_waypoints_.size();
      }
      // RCLCPP_DEBUG(get_logger(), "Next next waypoint index: %d", next_next_waypoint_index);

      CartesianPosition next_waypoint = local_waypoints_[next_waypoint_index];
      CartesianPosition next_next_waypoint = local_waypoints_[next_next_waypoint_index];

      // find the angular difference between next_waypoint and next_next_waypoint
      double angle = std::atan2(next_next_waypoint.y - next_waypoint.y, next_next_waypoint.x - next_waypoint.x);
      // RCLCPP_DEBUG(get_logger(), "Angle: %.6f", angle);
      // construct next_waypoint_
      this->next_waypoint_ = std::make_shared<geometry_msgs::msg::Pose>();
      this->next_waypoint_->position.x = float(next_waypoint.x);
      this->next_waypoint_->position.y = float(next_waypoint.y);
      this->next_waypoint_->position.z = float(next_waypoint.z);
      this->next_waypoint_->orientation = tf2::toMsg(tf2::Quaternion(tf2::Vector3(0, 0, 1), angle));
    }

    void GlobalPlannerNode::convert_gnss_to_local_cartesian(GeodeticPosition inputGeoPosition, CartesianPosition &outputCartesianPosition)
    {

      proj.Forward(inputGeoPosition.latitude,
                   inputGeoPosition.longitude,
                   inputGeoPosition.altitude,
                   outputCartesianPosition.x,
                   outputCartesianPosition.y,
                   outputCartesianPosition.z);
    }

    void
    GlobalPlannerNode::timer_callback()
    {
      // publish global path
      this->p_publish_global_path();

      // publish next waypoint in map coordinate
      this->p_publish_next_waypoint();
    }

    void GlobalPlannerNode::parse_datum()
    {
      std::string datum_str = this->get_parameter("datum").as_string();

      // Split the string using ',' as the delimiter
      std::stringstream ss(datum_str);
      std::string token;
      std::vector<float> values;
      while (std::getline(ss, token, ','))
      {
        try
        {
          float value = std::stof(token);
          values.push_back(value);
        }
        catch (const std::exception &ex)
        {
          RCLCPP_ERROR(this->get_logger(), "Error parsing parameter: %s", ex.what());
        }
      }

      // Ensure we have exactly three values
      if (values.size() != 3)
      {
        RCLCPP_WARN(this->get_logger(), "Invalid parameter format for 'datum'. Expected 3 values separated by commas.");
      }
      else
      {
        map_origin_.latitude = values[0];
        map_origin_.longitude = values[1];
        map_origin_.altitude = values[2];
        const GeographicLib::Geocentric &earth = GeographicLib::Geocentric::WGS84();
        proj = GeographicLib::LocalCartesian(map_origin_.latitude, map_origin_.longitude, map_origin_.altitude, earth);
        RCLCPP_INFO(get_logger(), "Datum - Latitude: %.6f, Longitude: %.6f, Altitude: %.6f",
                    map_origin_.latitude, map_origin_.longitude, map_origin_.altitude);
      }
    }

    std::vector<GeodeticPosition> GlobalPlannerNode::read_gnss_waypoints(const std::string &file_path)
    {
      std::vector<GeodeticPosition> waypoints;
      std::ifstream infile(file_path);

      if (!infile.is_open())
      {
        RCLCPP_ERROR(get_logger(), "Failed to open GNSS waypoints file: %s", file_path.c_str());
        return waypoints;
      }

      // Skip the first line with column names
      std::string line;
      std::getline(infile, line);

      while (std::getline(infile, line))
      {
        std::istringstream iss(line);
        std::string timestamp_str, latitude_str, longitude_str, altitude_str;
        // Extract each value from the comma-separated line
        if (!(std::getline(iss, timestamp_str, ',') &&
              std::getline(iss, latitude_str, ',') &&
              std::getline(iss, longitude_str, ',') &&
              std::getline(iss, altitude_str, ',')))
        {
          RCLCPP_WARN(get_logger(), "Invalid GNSS waypoint format: %s", line.c_str());
          continue;
        }

        try
        {
          // Convert the string values to floats
          double latitude = std::stod(latitude_str);
          double longitude = std::stod(longitude_str);
          double altitude = std::stod(altitude_str);

          // Create a GeodeticPosition object and add it to the waypoints vector
          GeodeticPosition waypoint;
          waypoint.latitude = latitude;
          waypoint.longitude = longitude;
          waypoint.altitude = altitude;
          waypoints.push_back(waypoint);
        }
        catch (const std::exception &ex)
        {
          RCLCPP_ERROR(get_logger(), "Error parsing GNSS waypoint: %s", ex.what());
        }
      }

      infile.close();
      return waypoints;
    }

    // Function to find the closest waypoint to the vehicle's current position
    size_t GlobalPlannerNode::findClosestWaypoint(const CartesianPosition &vehicle_position)
    {
      size_t closest_waypoint_index = 0;
      double min_distance = std::numeric_limits<double>::max();

      for (size_t i = 0; i < local_waypoints_.size(); ++i)
      {
        const CartesianPosition &waypoint = local_waypoints_[i];
        double distance = calculateDistance(vehicle_position.x, vehicle_position.y, waypoint.x, waypoint.y);

        if (distance < min_distance)
        {
          min_distance = distance;
          closest_waypoint_index = i;
        }
      }

      return closest_waypoint_index;
    }
    void GlobalPlannerNode::p_publish_global_path()
    {
      if (this->global_path_publisher_ == nullptr)
      {
        return;
      }
      // RCLCPP_DEBUG(get_logger(), "Publishing global path.");
      // Create a nav_msgs::msg::Path to represent the global path
      nav_msgs::msg::Path global_path_msg;

      // Clear the existing waypoints in the global path
      global_path_msg.poses.clear();

      // Iterate over the local waypoints and convert them to poses in the global path
      for (const auto &local_waypoint : local_waypoints_)
      {
        geometry_msgs::msg::PoseStamped pose_stamped;
        pose_stamped.pose.position.x = local_waypoint.x;
        pose_stamped.pose.position.y = local_waypoint.y;
        pose_stamped.pose.position.z = local_waypoint.z;
        pose_stamped.pose.orientation.w = 1.0; // Assuming no orientation information

        global_path_msg.poses.push_back(pose_stamped);
      }

      // Set the header for the global path
      global_path_msg.header.frame_id = this->get_parameter("map_frame").as_string(); // Set the frame ID to "map"
      global_path_msg.header.stamp = this->now();                                     // Set the timestamp to the current time

      // Publish the global path
      global_path_publisher_->publish(global_path_msg);
    }
    void GlobalPlannerNode::p_publish_next_waypoint()
    {
      if (this->next_waypoint_publisher_ == nullptr || this->next_waypoint_ == nullptr)
      {
        return;
      }

      geometry_msgs::msg::PoseStamped next_waypoint_msg;
      next_waypoint_msg.header.frame_id = this->get_parameter("map_frame").as_string();
      next_waypoint_msg.header.stamp = this->now();
      next_waypoint_msg.pose = *this->next_waypoint_;
      // publish
      this->next_waypoint_publisher_->publish(next_waypoint_msg);
    }

  } // namespace global_planning
} // namespace roar

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<roar::global_planning::GlobalPlannerNode>();
  rclcpp::spin(node->get_node_base_interface());
  rclcpp::shutdown();

  return 0;
}
