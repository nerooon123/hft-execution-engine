#ifndef HFT_PORTFOLIO_POSITION_MANAGER_HPP
#define HFT_PORTFOLIO_POSITION_MANAGER_HPP

#include "execution/order.hpp"

namespace hft {
namespace portfolio {

class PositionManager {
public:
    PositionManager();

    void onFill(const execution::Order& order);

    double getPosition() const;
    double getAveragePrice() const;
    double getRealizedPnL() const;

private:
    double position_;
    double average_price_;
    double realized_pnl_;
};

} // namespace portfolio
} // namespace hft

#endif // HFT_PORTFOLIO_POSITION_MANAGER_HPP