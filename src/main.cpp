#include "core/logger.hpp"
#include "data/market_data_loader.hpp"
#include "engine/event_loop.hpp"
#include "strategies/print_strategy.hpp"

int main() {
    hft::core::Logger::log(hft::core::LogLevel::INFO, "HFT Execution Engine started");

    auto ticks = hft::data::MarketDataLoader::loadFromCSV("data/sample_ticks.csv");

    if (ticks.empty()) {
        hft::core::Logger::log(hft::core::LogLevel::WARN, "No market data loaded");
        return 0;
    }

    hft::strategies::PrintStrategy strategy;
    hft::engine::EventLoop event_loop;

    event_loop.run(ticks, strategy);

    return 0;
}