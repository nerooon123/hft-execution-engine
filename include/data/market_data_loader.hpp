#ifndef HFT_DATA_MARKET_DATA_LOADER_HPP
#define HFT_DATA_MARKET_DATA_LOADER_HPP

#include <string>
#include <vector>

#include "data/tick.hpp"

namespace hft {
namespace data {

class MarketDataLoader {
public:
    static std::vector<Tick> loadFromCSV(const std::string& filename);
};

} // namespace data
} // namespace hft

#endif // HFT_DATA_MARKET_DATA_LOADER_HPP