#include "strategies/print_strategy.hpp"
#include "execution/order.hpp"
#include "execution/fill_engine.hpp"
#include "portfolio/position_manager.hpp"

namespace hft {
namespace strategies {

void PrintStrategy::onTick(const data::Tick& tick) {
    static portfolio::PositionManager position_manager;
    execution::FillEngine fill_engine(position_manager);

    if (tick.price < 101.0) {
        execution::Order order(
            execution::OrderSide::BUY,
            tick.price,
            1.0,
            tick.timestamp
        );

        fill_engine.execute(order);
    }
}

} // namespace strategies
} // namespace hft