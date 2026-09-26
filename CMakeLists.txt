cmake_minimum_required(VERSION 3.16)
project(safe-house LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(runmain
    src/main.cpp
    src/Logger.cpp
    src/defcon_tracker.cpp
    src/secure_states.cpp
    src/math_utils.cpp
    src/safe_home.cpp
)

target_include_directories(runmain PRIVATE src)