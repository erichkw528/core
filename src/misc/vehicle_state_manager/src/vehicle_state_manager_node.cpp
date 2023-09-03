
#include "vehicle_state_manager/vehicle_state_manager_node.hpp"

using namespace roar;

VehicleStateManagerNode::VehicleStateManagerNode() : nav2_util::LifecycleNode("vehicle_state_manager")
{
    RCLCPP_INFO(get_logger(), "vehicle_state_manager_node is now online.");
}

VehicleStateManagerNode::~VehicleStateManagerNode()
{
}

nav2_util::CallbackReturn VehicleStateManagerNode::on_configure(const rclcpp_lifecycle::State &state)
{
    RCLCPP_INFO(get_logger(), "vehicle_state_manager_node is now configuring.");
    update_timer = create_wall_timer(std::chrono::milliseconds(100), std::bind(&VehicleStateManagerNode::update_callback, this));
    return nav2_util::CallbackReturn::SUCCESS;
}

nav2_util::CallbackReturn VehicleStateManagerNode::on_activate(const rclcpp_lifecycle::State &state)
{
    RCLCPP_INFO(get_logger(), "vehicle_state_manager_node is now active.");
    return nav2_util::CallbackReturn::SUCCESS;
}
nav2_util::CallbackReturn VehicleStateManagerNode::on_deactivate(const rclcpp_lifecycle::State &state)
{
    RCLCPP_INFO(get_logger(), "vehicle_state_manager_node is now inactive.");
    return nav2_util::CallbackReturn::SUCCESS;
}

nav2_util::CallbackReturn VehicleStateManagerNode::on_cleanup(const rclcpp_lifecycle::State &state)
{
    RCLCPP_INFO(get_logger(), "vehicle_state_manager_node is now cleaning up.");
    return nav2_util::CallbackReturn::SUCCESS;
}

nav2_util::CallbackReturn VehicleStateManagerNode::on_shutdown(const rclcpp_lifecycle::State &state)
{
    RCLCPP_INFO(get_logger(), "vehicle_state_manager_node is now shutting down.");
    return nav2_util::CallbackReturn::SUCCESS;
}

void VehicleStateManagerNode::update_callback()
{
    RCLCPP_INFO(get_logger(), "vehicle_state_manager_node is now updating.");
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<roar::VehicleStateManagerNode>();

    rclcpp::spin(node->get_node_base_interface());
    rclcpp::shutdown();

    return 0;
}