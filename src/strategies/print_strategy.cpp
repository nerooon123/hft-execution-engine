#include "strategies/print_strategy.hpp"
#include <iostream>

namespace hft {
namespace strategies {

void PrintStrategy::onTick(const data::Tick& tick) {
    std::cout
        << "Tick received -> "
        << "Timestamp: " << tick.timestamp
        << " Price: " << tick.price
        << " Volume: " << tick.volume
        << std::endl;
}

} // namespace strategies
} // namespace hft