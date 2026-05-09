#ifndef HFT_STRATEGIES_STRATEGY_HPP
#define HFT_STRATEGIES_STRATEGY_HPP

#include "data/tick.hpp"

namespace hft {
namespace strategies {

class Strategy {
public:
    virtual ~Strategy() = default;

    virtual void onTick(const data::Tick& tick) = 0;
};

} // namespace strategies
} // namespace hft

#endif // HFT_STRATEGIES_STRATEGY_HPP