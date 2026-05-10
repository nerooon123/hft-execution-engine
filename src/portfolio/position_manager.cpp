#include "portfolio/position_manager.hpp"
#include "core/logger.hpp"

#include <string>

namespace hft {
namespace portfolio {

PositionManager::PositionManager()
    : position_(0.0),
      average_price_(0.0),
      realized_pnl_(0.0) {}

void PositionManager::onFill(const execution::Order& order) {
    double qty = order.getQuantity();
    double price = order.getPrice();

    if (order.getSide() == execution::OrderSide::BUY) {
        double total_cost =
            (position_ * average_price_) +
            (qty * price);

        position_ += qty;
        average_price_ = total_cost / position_;
    }
    else {
        position_ -= qty;

        realized_pnl_ +=
            (price - average_price_) * qty;
    }

    core::Logger::log(
        core::LogLevel::INFO,
        "Position updated | Pos: " +
        std::to_string(position_) +
        " AvgPrice: " +
        std::to_string(average_price_) +
        " RealizedPnL: " +
        std::to_string(realized_pnl_)
    );
}

double PositionManager::getPosition() const {
    return position_;
}

double PositionManager::getAveragePrice() const {
    return average_price_;
}

double PositionManager::getRealizedPnL() const {
    return realized_pnl_;
}

} // namespace portfolio
} // namespace hft