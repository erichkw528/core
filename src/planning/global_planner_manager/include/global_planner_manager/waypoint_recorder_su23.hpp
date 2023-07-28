// Copyright 2023 michael. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifndef GOKART_WAYPOINT_RECORDER_SU23_HPP_
#define GOKART_WAYPOINT_RECORDER_SU23_HPP_

#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"
using namespace std;

namespace gokart_planner
{
    class WaypointRecorder_su23 : public rclcpp::Node
    {
        public:
            /**
             * @brief A constructor for gokart_planner::WaypointRecorder class
             */
            WaypointRecorder_su23();
            /**
             * @brief A destructor for gokart_planner::WaypointRecorder class
             */
            ~WaypointRecorder_su23();
        
        protected:
            void topic_callback(const sensor_msgs::msg::NavSatFix::SharedPtr msg);
            std::string msg_to_String(const sensor_msgs::msg::NavSatFix::SharedPtr msg);
            int record_interval_nanoseconds;
            /**
             * 
             * @todo figure out some variables to include for the downsampling of the NavSatFix messages 
            */
            rclcpp::Time prev_time;
            rclcpp::Subscription<sensor_msgs::msg::NavSatFix>::SharedPtr subscription_;
            ofstream outputFile;
    };
}
#endif // GOKART_WAYPOINT_RECORDER_SU23_HPP_
