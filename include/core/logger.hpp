#ifndef HFT_CORE_LOGGER_HPP
#define HFT_CORE_LOGGER_HPP

#include <string>
#include <iostream>

namespace hft {
namespace core {

enum class LogLevel {
    INFO,
    WARN,
    ERROR
};

class Logger {
public:
    static void log(LogLevel level, const std::string& message);
};

} // namespace core
} // namespace hft

#endif // HFT_CORE_LOGGER_HPP