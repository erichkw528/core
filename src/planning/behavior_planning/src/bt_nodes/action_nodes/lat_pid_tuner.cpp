#include "behavior_planning/bt_nodes/action_nodes/lat_pid_tuner.hpp"
#include "rclcpp/logging.hpp"
#include "behavior_planning/common/utils.hpp"

#include "rapidjson/document.h" 
#include "rapidjson/filereadstream.h" 
  
#include <cstdio> 

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
                    //get the file path from blackboard
                    BT::Optional<std::string> file_path = getInput<std::string>("file_path");
                    if (!file_path)
                    {
                        RCLCPP_ERROR(logger_, "BehaviorPlannerBTLifeCycleNode: no file path");
                        return BT::NodeStatus::FAILURE;
                    }

                    // Open the file 
                    const char* file_path_c = file_path.value().c_str();
                    FILE* fp = fopen(file_path_c, "rb"); 
  
                    // Read the file into a buffer 
                    char readBuffer[65536]; 
                    rapidjson::FileReadStream is(fp, readBuffer, 
                                                sizeof(readBuffer)); 
                
                    // Parse the JSON document 
                    rapidjson::Document doc; 
                    doc.ParseStream(is); 
                
                    // Close the file 
                    fclose(fp); 

                    //get the value of kp, ki, kd
                    double kp = doc["latitudinal_controller"]["10"]["kp"].GetDouble();
                    double ki = doc["latitudinal_controller"]["10"]["ki"].GetDouble();
                    double kd = doc["latitudinal_controller"]["10"]["kd"].GetDouble();

                    outputs.value()->behavior_status.action_type = roar_msgs::msg::BehaviorStatus::ACTION_STOP;
                    return BT::NodeStatus::SUCCESS;
                }

                BT::PortsList LatPIDtuner::providedPorts()
                {
                    return {
                        BT::InputPort<roar::planning::behavior::BTInputs::ConstSharedPtr>("file_path"),
                        BT::OutputPort<roar::planning::behavior::BTOutputs::SharedPtr>("outputs")};
                }

            }
        }
    }
} // namespace roar
