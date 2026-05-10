#ifndef HFT_EXECUTION_FILL_ENGINE_HPP
#define HFT_EXECUTION_FILL_ENGINE_HPP

#include "execution/order.hpp"
#include "portfolio/position_manager.hpp"

namespace hft {
namespace execution {

class FillEngine {
public:
    explicit FillEngine(
        portfolio::PositionManager& position_manager
    );

    void execute(const Order& order);

private:
    portfolio::PositionManager& position_manager_;
};

} // namespace execution
} // namespace hft

#endif // HFT_EXECUTION_FILL_ENGINE_HPP