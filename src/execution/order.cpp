#include "execution/order.hpp"

namespace hft {
namespace execution {

Order::Order(
    OrderSide side,
    double price,
    double quantity,
    std::int64_t timestamp
)
    : side_(side),
      price_(price),
      quantity_(quantity),
      timestamp_(timestamp) {}

OrderSide Order::getSide() const {
    return side_;
}

double Order::getPrice() const {
    return price_;
}

double Order::getQuantity() const {
    return quantity_;
}

std::int64_t Order::getTimestamp() const {
    return timestamp_;
}

} // namespace execution
} // namespace hft