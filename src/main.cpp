#include <iostream>

#include "core/logger.hpp"
#include "data/market_data_loader.hpp"

int main() {
    hft::core::Logger::log(hft::core::LogLevel::INFO, "HFT Execution Engine started");

    hft::core::Logger::log(hft::core::LogLevel::INFO, "Loading market data from CSV");
    std::vector<hft::data::Tick> ticks =
        hft::data::MarketDataLoader::loadFromCSV(
            "../data/sample_ticks.csv"
        );

    for(const auto& tick : ticks) {
        std::cout
            << "Timesstamp: " << tick.timestamp
            << " | Price: " << tick.price
            << " | Volume: " << tick.volume
            << std::endl;
    }
    if (ticks.empty()) {
        hft::core::Logger::log(hft::core::LogLevel::WARN, "CSV file contains no tick data");
    }

    return 0;
}