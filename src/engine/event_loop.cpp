#include "engine/event_loop.hpp"
#include "core/logger.hpp"

#include <thread>
#include <chrono>

namespace hft {
namespace engine {

void EventLoop::run(
    const std::vector<data::Tick>& ticks,
    strategies::Strategy& strategy
) {
    core::Logger::log(
        core::LogLevel::INFO,
        "Event loop started"
    );

    for (const auto& tick : ticks) {
        strategy.onTick(tick);

        // this is fake replay. later will be timing engine
        std::this_thread::sleep_for(
            std::chrono::milliseconds(500)
        );
    }

    core::Logger::log(
        core::LogLevel::INFO,
        "Event loop finished"
    );
}

} // namespace engine
} // namespace hft