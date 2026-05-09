#include "core/logger.hpp"

int main() {
    hft::core::Logger::log(hft::core::LogLevel::INFO, "HFT Execution Engine started");
    hft::core::Logger::log(hft::core::LogLevel::WARN, "This is a warning message");
    hft::core::Logger::log(hft::core::LogLevel::ERROR, "This is an error message");
    return 0;
}