std_msgs/Header header

# raw sensor data
nav_msgs/Odometry odometry
sensor_msgs/Imu imu
std_msgs/Float32 speedometer

# global planner
nav_msgs/Path global_path 
geometry_msgs/PoseStamped next_waypoint

# behavior planner 


# Vehicle control commands
VehicleControl vehicle_control