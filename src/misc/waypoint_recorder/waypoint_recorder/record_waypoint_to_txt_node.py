# Copyright 2023 michael. All rights reserved.
# Use of this source code is governed by a BSD-style
# license that can be found in the LICENSE file.

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
from pathlib import Path

class ROARWaypointToTxtNode(Node):
    def __init__(self):
        super().__init__("roar_waypoint_to_txt_node")
        self.declare_parameter("recording_path", "./data")
        sub = self.create_subscription(NavSatFix, 
                                       "/roar/gnss", 
                                       self.on_waypoint_received, 
                                       10)

        self.recording_dir = Path(self.get_parameter("recording_path").get_parameter_value().string_value)
        self.get_logger().info(f"Recording path: {self.recording_dir}")
        self.recording_dir.mkdir(exist_ok=True, parents=True)
        self.recording_path = self.recording_dir / "waypoint.txt"
        self.recording_file = self.recording_path.open("w")
        self.recording_file.write("timestamp,latitude,longitude,altitude,covariance1,covariance2,covariance3,covariance4,covariance5,covariance6,covariance7,covariance8,covariance9\n")
        
        self.get_logger().info(f"ROARWaypointToTxtNode has started. Listening topic: {sub.topic}")

    def on_waypoint_received(self, msg:NavSatFix):
        cov = msg.position_covariance.tolist()
        cov_string = ",".join([str(x) for x in cov])

        msg = f"{msg.header.stamp.sec}.{msg.header.stamp.nanosec},{msg.latitude},{msg.longitude},{msg.altitude},{cov_string}\n"
        self.recording_file.write(msg)

    def destroy_node(self):
        self.recording_file.close()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = ROARWaypointToTxtNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
