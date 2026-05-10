#include "execution/fill_engine.hpp"
#include "core/logger.hpp"

namespace hft {
namespace execution {

FillEngine::FillEngine(
    portfolio::PositionManager& position_manager
)
    : position_manager_(position_manager) {}

void FillEngine::execute(const Order& order) {
    std::string side_str =
        (order.getSide() == OrderSide::BUY)
            ? "BUY"
            : "SELL";

    core::Logger::log(
        core::LogLevel::INFO,
        "Order executed: " +
        side_str +
        " | Price: " +
        std::to_string(order.getPrice()) +
        " | Qty: " +
        std::to_string(order.getQuantity())
    );

    position_manager_.onFill(order);
}

} // namespace execution
} // namespace hft