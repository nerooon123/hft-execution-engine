cmake_minimum_required(VERSION 4.0)
project(HFT_Execution_Engine)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(engine
    src/main.cpp
    src/core/logger.cpp
    src/data/market_data_loader.cpp
    src/strategies/print_strategy.cpp
    src/engine/event_loop.cpp
)
