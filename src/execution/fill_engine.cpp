#include "execution/fill_engine.hpp"
#include "core/logger.hpp"

#include <string>

namespace hft {
namespace execution {

void FillEngine::execute(const Order& order) {
    std::string side_str =
        (order.getSide() == OrderSide::BUY)
            ? "BUY"
            : "SELL";

    hft::core::Logger::log(
        hft::core::LogLevel::INFO,
        "Order executed: " +
        side_str +
        " | Price: " + std::to_string(order.getPrice()) +
        " | Qty: " + std::to_string(order.getQuantity())
    );
}

} // namespace execution
} // namespace hft