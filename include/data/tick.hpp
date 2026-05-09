#ifndef HFT_DATA_TICK_HPP
#define HFT_DATA_TICK_HPP

#include <cstdint>

namespace hft {
namespace data {

struct Tick {
    std::int64_t timestamp;
    double price;
    double volume;
};

} // namespace data
} // namespace hft

#endif // HFT_DATA_TICK_HPP