// Copyright 2023 michael. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include "global_planner_manager/waypoint_recorder_su23.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"
#include "rclcpp/rclcpp.hpp"

#include <iostream>
#include <fstream>
#include <string.h>
#include <filesystem>
#include <experimental/filesystem>
#include <cstdlib>
using std::placeholders::_1;

namespace fs = std::experimental::filesystem;

namespace gokart_planner
{ 
    WaypointRecorder_su23::WaypointRecorder_su23() : Node("waypoint_recorder")
    {
        this->declare_parameter("output_file_path", "./data/recording_su23.txt");
        this->declare_parameter("nav_topic", "sensor_msgs/msg/nav_sat_fix");
        this->declare_parameter("record_interval", 1.0);

        // setting subscription
        std::string nav_topic =
            this->get_parameter("nav_topic").get_parameter_value().get<std::string>();
        RCLCPP_INFO(get_logger(), "nav_topic: %s", nav_topic.c_str());
        subscription_ = this->create_subscription<sensor_msgs::msg::NavSatFix>(
            nav_topic, 10, std::bind(&WaypointRecorder_su23::topic_callback, this, _1));

        // open file
        std::string output_file_path =
        this->get_parameter("output_file_path").get_parameter_value().get<std::string>();
        RCLCPP_INFO(get_logger(), "output_file_path: %s", output_file_path.c_str());
        fs::path p(output_file_path.c_str());
        fs::path dir = p.parent_path();
        bool status = fs::create_directories(dir);
        this->outputFile.open(p.c_str());

        // setting rate
        this->record_interval_nanoseconds = int(this->get_parameter("record_interval").as_double()*1e9);
        RCLCPP_INFO(get_logger(), "record_interval: %fs", this->get_parameter("record_interval").as_double());
        this->prev_time = this->now();
    } 
    WaypointRecorder_su23::~WaypointRecorder_su23()
    {
        RCLCPP_INFO(get_logger(), "Shutting down");
        this->outputFile.close();
    }

    void WaypointRecorder_su23::topic_callback(const sensor_msgs::msg::NavSatFix::SharedPtr msg)
    {   
        /** @todo change the msg_to_String() function to correctly print the NavSatFix Message
         * 
        */
        auto time_diff = (this->now() - this->prev_time).nanoseconds();
        if (time_diff > this->record_interval_nanoseconds)
        {
            std::string msg_to_file = this->msg_to_String(msg) + "\n";
            RCLCPP_INFO(get_logger(), msg_to_file);
            this->outputFile << msg_to_file;
            this->prev_time = this->now();
        }
    }
    std::string WaypointRecorder_su23::msg_to_String(const sensor_msgs::msg::NavSatFix::SharedPtr msg)
    {
        std::string output("");
        output += "lat";
        output += to_string(msg->latitude);
        output += ",";

        output += to_string(msg->longitude);
        output += ",";

        output += "test";
        return output;
    }

}
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<gokart_planner::WaypointRecorder_su23>();
    rclcpp::spin(node->get_node_base_interface());
    rclcpp::shutdown();

    return 0;
}