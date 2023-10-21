#include "behavior_planning/bt_nodes/action_nodes/lat_pid_tuner.hpp"
#include "rclcpp/logging.hpp"
#include "behavior_planning/common/utils.hpp"

#include "rapidjson/document.h"

#include <iostream>
#include <fstream>
#include "rapidjson/document.h"
using namespace rapidjson;

namespace roar
{
    namespace planning
    {
        namespace behavior
        {
            namespace action
            {

                LatPIDtuner::LatPIDtuner(
                    const std::string &action_name,
                    const BT::NodeConfiguration &conf,
                    const rclcpp::Logger &logger,
                    rclcpp::Clock &clock) : BT::SyncActionNode(action_name, conf), logger_(logger), clock_(clock)
                {
                    RCLCPP_DEBUG(logger_, "LatPIDtuner created");

                    p_readConfig();
                }

                void LatPIDtuner::p_readConfig()
                {
                    // get the file path from blackboard
                    BT::Optional<std::string> file_path = getInput<std::string>("pid_file_path");
                    if (!file_path)
                    {
                        RCLCPP_ERROR(logger_, "BehaviorPlannerBTLifeCycleNode: no file path");
                    }

                    std::ifstream file(file_path.value());
                    if (!file.is_open())
                    {
                        RCLCPP_ERROR_STREAM(logger_, "BehaviorPlannerBTLifeCycleNode: [" << file_path.value() << "] file not found");
                    }

                    std::string jsonData((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
                    // Parse the JSON data
                    Document document;
                    if (document.Parse(jsonData.c_str()).HasParseError())
                    {
                        RCLCPP_ERROR(logger_, "BehaviorPlannerBTLifeCycleNode: parse error");
                    }

                    // Access the elements in the JSON data
                    const Value &latitudinalController = document["latitudinal_controller"];

                    for (Value::ConstMemberIterator it = latitudinalController.MemberBegin(); it != latitudinalController.MemberEnd(); ++it)
                    {
                        const int key = std::stoi(it->name.GetString());
                        const Value &controller = it->value;
                        const double k_p = controller["k_p"].GetDouble();
                        const double k_d = controller["k_d"].GetDouble();
                        const double k_i = controller["k_i"].GetDouble();

                        // RCLCPP_INFO_STREAM(logger_, "BehaviorPlannerBTLifeCycleNode: key: [" << key << "], k_p: [" << k_p << "], k_d: [" << k_d << "], k_i: [" << k_i << "]");
                        pid_coefficients_[key] = PidCoefficients{k_p, k_i, k_d};
                    }

                    // print all pid_coefficients
                    for (auto const &x : pid_coefficients_)
                    {
                        RCLCPP_INFO_STREAM(logger_, "BehaviorPlannerBTLifeCycleNode: key: [" << x.first << "], k_p: [" << x.second.k_p << "], k_d: [" << x.second.k_d << "], k_i: [" << x.second.k_i << "]");
                    }
                }

                BT::NodeStatus LatPIDtuner::tick()
                {
                    RCLCPP_DEBUG(logger_, "LatPIDtuner actuating...");
                    BT::Optional<roar::planning::behavior::BTOutputs::SharedPtr> outputs = config().blackboard->get<roar::planning::behavior::BTOutputs::SharedPtr>("outputs");
                    if (!outputs)
                    {
                        RCLCPP_ERROR(logger_, "BehaviorPlannerBTLifeCycleNode: no outputs");
                        return BT::NodeStatus::FAILURE;
                    }

                    return BT::NodeStatus::SUCCESS;
                }

                BT::PortsList LatPIDtuner::providedPorts()
                {
                    return {
                        BT::InputPort<std::string>("pid_file_path"),
                        BT::OutputPort<roar::planning::behavior::BTOutputs::SharedPtr>("outputs")};
                }
            }
        }
    }
} // namespace roar
