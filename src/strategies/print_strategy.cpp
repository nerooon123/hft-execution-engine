#include "strategies/print_strategy.hpp"
#include "execution/order.hpp"
#include "execution/fill_engine.hpp"

namespace hft {
namespace strategies {

void PrintStrategy::onTick(const data::Tick& tick) {
    if (tick.price < 101.0) {
        execution::Order order(
            execution::OrderSide::BUY,
            tick.price,
            1.0,
            tick.timestamp
        );

        execution::FillEngine fill_engine;
        fill_engine.execute(order);
    }
}

} // namespace strategies
} // namespace hft