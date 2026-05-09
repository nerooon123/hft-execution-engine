#include "data/market_data_loader.hpp"
#include "core/logger.hpp"

#include <fstream>
#include <sstream>

namespace hft {
namespace data {

std::vector<Tick> MarketDataLoader::loadFromCSV(const std::string& filename) {
    std::vector<Tick> ticks;

    std::ifstream file(filename);

    if (!file.is_open()) {
        core::Logger::log(core::LogLevel::ERROR, "Failed to open file: " + filename);
        return ticks;
    }

    std::string line;

    // Skip CSV header
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string cell;

        Tick tick{};

        // timestamp
        std::getline(ss, cell, ',');
        tick.timestamp = std::stoll(cell);

        // price
        std::getline(ss, cell, ',');
        tick.price = std::stod(cell);

        // volume
        std::getline(ss, cell, ',');
        tick.volume = std::stod(cell);

        ticks.push_back(tick);
    }

    core::Logger::log(core::LogLevel::INFO, "Loaded ticks: " + std::to_string(ticks.size()));

    return ticks;
}

} // namespace data
} // namespace hft