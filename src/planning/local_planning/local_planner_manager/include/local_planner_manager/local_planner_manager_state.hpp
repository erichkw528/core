#ifndef ROAR_PLANNING__PLUGIN__STATE_HPP_
#define ROAR_PLANNING__PLUGIN__STATE_HPP_

namespace roar 
{
    namespace planning
    {
        namespace local
        {
            struct LocalPlannerManagerState
            {
                typedef std::shared_ptr<LocalPlannerManagerState> SharedPtr;

                
            };
            
            struct LocalPlannerManagerConfig
            {
                typedef std::shared_ptr<LocalPlannerManagerConfig> SharedPtr;

                bool debug;
                double loop_rate;
            };
        } // namespace local
    } // namespace planning
} // namespace roar

#endif // ROAR_PLANNING__PLUGIN__STATE_HPP_