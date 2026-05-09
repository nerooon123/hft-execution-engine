#include "core/logger.hpp"

namespace hft {
namespace core {

void Logger::log(LogLevel level, const std::string& message) {
    std::string level_str;
    switch (level) {
        case LogLevel::INFO:
            level_str = "INFO";
            break;
        case LogLevel::WARN:
            level_str = "WARN";
            break;
        case LogLevel::ERROR:
            level_str = "ERROR";
            break;
    }
    std::cout << "[" << level_str << "] " << message << std::endl;
}

} // namespace core
} // namespace hft