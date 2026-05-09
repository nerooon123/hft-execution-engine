#ifndef HFT_EXECUTION_FILL_ENGINE_HPP
#define HFT_EXECUTION_FILL_ENGINE_HPP

#include "execution/order.hpp"

namespace hft {
namespace execution {

class FillEngine {
public:
    void execute(const Order& order);
};

} // namespace execution
} // namespace hft

#endif // HFT_EXECUTION_FILL_ENGINE_HPP