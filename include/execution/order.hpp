#ifndef HFT_EXECUTION_ORDER_HPP
#define HFT_EXECUTION_ORDER_HPP

#include <cstdint>

namespace hft {
namespace execution {

enum class OrderSide {
    BUY,
    SELL
};

class Order {
public:
    Order(
        OrderSide side,
        double price,
        double quantity,
        int64_t timestamp
    );

    OrderSide getSide() const;
    double getPrice() const;
    double getQuantity() const;
    int64_t getTimestamp() const;

private:
    OrderSide side_;
    double price_;
    double quantity_;
    int64_t timestamp_;    
};

} // namespace execution
} // namespace hft

#endif // HFT_EXECUTION_ORDER_HPP