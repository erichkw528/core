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

      // print parameter datum, gnss file path, next waypoint and map frame
      RCLCPP_DEBUG(get_logger(), "datum: [%s] | gnss_file_path: [%s] | map_frame: [%s]",
                   this->get_parameter("datum").as_string().c_str(),
                   this->get_parameter("gnss_file_path").as_string().c_str(),
                   this->get_parameter("map_frame").as_string().c_str()

      );
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
      this->global_path_visualization_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("global_path_visualization", 10);
      this->vehicle_curr_position_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("vehicle_curr_position", 10);
      auto qos = rclcpp::QoS(rclcpp::KeepLast(10));
      qos.best_effort();
      this->nav_sat_fix_subscriber_ = this->create_subscription<sensor_msgs::msg::NavSatFix>("/roar/gnss", qos,
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
      this->global_path_visualization_publisher_->on_activate();
      this->vehicle_curr_position_publisher_->on_activate();
      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is now active.");

      return nav2_util::CallbackReturn::SUCCESS;
    }

    nav2_util::CallbackReturn GlobalPlannerNode::on_deactivate(const rclcpp_lifecycle::State &state)
    {
      RCLCPP_DEBUG(get_logger(), "GlobalPlannerNode is now inactive.");
      // Custom deactivation logic goes here

      this->next_waypoint_publisher_->on_deactivate();
      this->global_path_publisher_->on_deactivate();
      this->global_path_visualization_publisher_->on_deactivate();
      this->vehicle_curr_position_publisher_->on_deactivate();

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

    size_t GlobalPlannerNode::p_projectOntoWaypointPath(const CartesianPosition position)
    {
      // given position, find the index of the closest waypoint on local_waypoints
      // return the index of the closest waypoint

      float min_distance = std::numeric_limits<float>::max();
      size_t min_index = 0;
      for (size_t i = 0; i < local_waypoints_.size(); i++)
      {
        float distance = std::sqrt(std::pow(position.x - local_waypoints_[i].x, 2) + std::pow(position.y - local_waypoints_[i].y, 2));
        if (distance < min_distance)
        {
          min_distance = distance;
          min_index = i;
        }
      }
      return min_index;
    }

    size_t GlobalPlannerNode::p_searchNextWaypoint(const size_t startIndex)
    {
      // given the current vehicleIndex on the local_waypoint_
      // find the next waypoint that is min_distance away from the vehicle
      // return the index of the next waypoint
      size_t next_waypoint_index = startIndex;
      CartesianPosition vehicle_position = local_waypoints_[startIndex];

      for (size_t i = 0; i < local_waypoints_.size() / 10; i++)
      {
        next_waypoint_index = startIndex + i;
        CartesianPosition waypoint = local_waypoints_[next_waypoint_index];

        // if the waypoint is too far away from the vehicle, break

        if (std::sqrt(std::pow(vehicle_position.x - waypoint.x, 2) + std::pow(vehicle_position.y - waypoint.y, 2)) > this->next_waypoint_distance_threshold_)
        {
          break;
        }
      }
      return next_waypoint_index;
    }

    void GlobalPlannerNode::onGnssReceived(const sensor_msgs::msg::NavSatFix::SharedPtr msg)
    {
      RCLCPP_DEBUG(get_logger(), "---------------------");
      // For example, you can extract the latitude, longitude, and altitude from the message
      GeodeticPosition p({msg->latitude, msg->longitude, msg->altitude});
      RCLCPP_DEBUG(get_logger(), "GNSS: %.6f, %.6f, %.6f", p.latitude, p.longitude, p.altitude);

      // convert to local coordinate
      CartesianPosition vehicle_local_position;
      convert_gnss_to_local_cartesian(p, vehicle_local_position);
      RCLCPP_DEBUG(get_logger(), "vehicle_coord: %.6f, %.6f, %.6f", vehicle_local_position.x, vehicle_local_position.y, vehicle_local_position.z);

      // if this is the first iteration, find the waypoint that is
      //  1. toward the start
      //  2. at least min_dist away from vehicle
      // if (this->is_first_iteration_)
      // {
      //   RCLCPP_DEBUG(get_logger(), "first iteration");

      //   this->is_first_iteration_ = false;
      waypoint_index = this->p_findWaypointOnStart(vehicle_local_position);
      //   return;
      // }

      // if curr_waypoint is already min_dist away from vehicle
      //    don't do anything
      // else
      //    find the next waypoint that is min_dist away from vehicle

      CartesianPosition curr_waypoint = local_waypoints_[waypoint_index];
      float dist = std::sqrt(std::pow(vehicle_local_position.x - curr_waypoint.x, 2) + std::pow(vehicle_local_position.y - curr_waypoint.y, 2));
      RCLCPP_DEBUG(get_logger(), "curr_dist: %.6f | threshold: %.6f", dist, this->next_waypoint_distance_threshold_);

      if (dist >= this->next_waypoint_distance_threshold_)
      {
        RCLCPP_DEBUG(get_logger(), "vehicle is already min_dist away from curr_waypoint");
      }
      else
      {
        RCLCPP_DEBUG(get_logger(), "vehicle is not min_dist away from curr_waypoint");
        // otherwise, we need to update the waypoint index
        waypoint_index = this->p_searchNextWaypoint(waypoint_index);
      }

      // publish next waypoint
      this->publishNextWaypoint();
    }

    void GlobalPlannerNode::publishNextWaypoint()
    {
      CartesianPosition curr_waypoint = local_waypoints_[waypoint_index];

      RCLCPP_DEBUG(get_logger(), "waypoint index: %zu", waypoint_index);
      RCLCPP_DEBUG(get_logger(), "waypoint coord: %.6f, %.6f, %.6f", curr_waypoint.x, curr_waypoint.y, curr_waypoint.z);

      // find next next waypoint
      size_t next_next_waypoint_index = this->p_searchNextWaypoint(waypoint_index);
      RCLCPP_DEBUG(get_logger(), "next_next_waypoint_index: %zu", next_next_waypoint_index);

      // find angle between two waypoints
      float angle = std::atan2(local_waypoints_[next_next_waypoint_index].y - curr_waypoint.y,
                               local_waypoints_[next_next_waypoint_index].x - curr_waypoint.x);
      RCLCPP_DEBUG(get_logger(), "angle: %f", angle);

      geometry_msgs::msg::PoseStamped msg;
      msg.header.frame_id = "map";
      msg.header.stamp = this->now();
      msg.pose.position.x = float(curr_waypoint.x);
      msg.pose.position.y = float(curr_waypoint.y);
      msg.pose.position.z = float(curr_waypoint.z);
      msg.pose.orientation = tf2::toMsg(tf2::Quaternion(tf2::Vector3(0, 0, 1), angle));
      this->next_waypoint_publisher_->publish(msg);
    }
    void GlobalPlannerNode::publish_marker(CartesianPosition position)
    {
      // publish vehicle current position for debug purpose
      visualization_msgs::msg::Marker vehicle_curr_position;
      vehicle_curr_position.header.frame_id = this->get_parameter("map_frame").as_string();
      vehicle_curr_position.header.stamp = this->now();
      vehicle_curr_position.ns = "vehicle_curr_position";
      vehicle_curr_position.id = 0;
      vehicle_curr_position.type = visualization_msgs::msg::Marker::SPHERE;
      vehicle_curr_position.action = visualization_msgs::msg::Marker::ADD;
      vehicle_curr_position.pose.position.x = position.x;
      vehicle_curr_position.pose.position.y = position.y;
      vehicle_curr_position.pose.position.z = position.z;
      vehicle_curr_position.pose.orientation.x = 0.0;
      vehicle_curr_position.pose.orientation.y = 0.0;
      vehicle_curr_position.pose.orientation.z = 0.0;
      vehicle_curr_position.pose.orientation.w = 1.0;
      vehicle_curr_position.scale.x = 2.0;
      vehicle_curr_position.scale.y = 2.0;
      vehicle_curr_position.scale.z = 2.0;
      vehicle_curr_position.color.a = 1.0; // Don't forget to set the alpha!
      vehicle_curr_position.color.r = 0.0;
      vehicle_curr_position.color.g = 0.0;
      vehicle_curr_position.color.b = 1.0;
      vehicle_curr_position.lifetime = rclcpp::Duration::from_seconds(0.1);
      this->vehicle_curr_position_publisher_->publish(vehicle_curr_position);
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
    size_t
    GlobalPlannerNode::p_findWaypointOnStart(const CartesianPosition position)
    {
      size_t index = 0;
      // find the waypoint that is closest to the vehicle
      float min_dist = std::numeric_limits<float>::max();
      for (size_t i = 0; i < local_waypoints_.size(); i++)
      {
        float dist = std::sqrt(std::pow(position.x - local_waypoints_[i].x, 2) + std::pow(position.y - local_waypoints_[i].y, 2));
        if (dist < min_dist)
        {
          min_dist = dist;
          index = i;
        }
      }
      return index;
    }
    void
    GlobalPlannerNode::timer_callback()
    {
      // publish global path
      this->p_publish_global_path();
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
    size_t GlobalPlannerNode::findNextWaypoint(const CartesianPosition &vehicle_position)
    {
      size_t num_search_threshold = local_waypoints_.size() / 10;
      size_t closest_waypoint_index = 0;
      double min_distance = std::numeric_limits<double>::max();

      // only search the waypoints that is num_search_threshold ahead
      for (size_t i = 0; i < num_search_threshold; ++i)
      {
        size_t index = (i + closest_waypoint_index) % local_waypoints_.size();
        const CartesianPosition &waypoint = local_waypoints_[index];
        double distance = std::sqrt(std::pow(vehicle_position.x - waypoint.x, 2) +
                                    std::pow(vehicle_position.y - waypoint.y, 2));
        if (distance < min_distance)
        {
          min_distance = distance;
          closest_waypoint_index = index;
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
      // Create a nav_msgs::msg::Path to represent the global path
      nav_msgs::msg::Path global_path_msg;
      global_path_msg.header.stamp = this->now();                                     // Set the timestamp to the current time
      global_path_msg.header.frame_id = this->get_parameter("map_frame").as_string(); // Set the frame ID to "map"

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

      // print global path header
      // RCLCPP_INFO(this->get_logger(), "Global path header: frame_id=%s, stamp=%f",
      //             global_path_msg.header.frame_id.c_str(), global_path_msg.header.stamp.sec + global_path_msg.header.stamp.nanosec * 1e-9);

      // publish visualization

      visualization_msgs::msg::Marker markers;
      markers.type = visualization_msgs::msg::Marker::POINTS;
      markers.color.g = 0.8;
      markers.color.a = 0.8;
      markers.scale.x = 0.2;
      markers.scale.y = 0.2;
      markers.scale.z = 0.2;
      markers.header = global_path_msg.header;
      markers.id = 0;
      markers.ns = "global_path";

      for (const auto &poseStamed : global_path_msg.poses)
      {
        geometry_msgs::msg::Point p;
        p.x = poseStamed.pose.position.x;
        p.y = poseStamed.pose.position.y;
        p.z = 0.0;

        markers.points.push_back(p);
      }
      global_path_visualization_publisher_->publish(markers);
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
