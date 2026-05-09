#ifndef HFT_STRATEGIES_PRINT_STRATEGY_HPP
#define HFT_STRATEGIES_PRINT_STRATEGY_HPP

#include "strategies/strategy.hpp"

namespace hft {
namespace strategies {

class PrintStrategy : public Strategy {
public:
    void onTick(const data::Tick& tick) override;
};

} // namespace strategies
} // namespace hft

#endif // HFT_STRATEGIES_PRINT_STRATEGY_HPP