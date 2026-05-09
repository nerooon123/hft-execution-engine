#ifndef HFT_ENGINE_EVENT_LOOP_HPP
#define HFT_ENGINE_EVENT_LOOP_HPP

#include <vector>

#include "data/tick.hpp"
#include "strategies/strategy.hpp"

namespace hft {
namespace engine {

class EventLoop {
public:
    void run(
        const std::vector<data::Tick>& ticks,
        strategies::Strategy& strategy
    );
};

} // namespace engine
} // namespace hft

#endif // HFT_ENGINE_EVENT_LOOP_HPP