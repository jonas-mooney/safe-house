#ifndef LOGGER_H
#define LOGGER_H

#include <chrono>
// #include <string_view>
#include <cstdint>

class Logger {
public:
    // Explicit duration setup makes the interval configurable
    explicit Logger(std::chrono::seconds interval = std::chrono::seconds(5));

    // Non-blocking tick check called inside the main loop
    void update(uint8_t systemState);

private:
    std::chrono::seconds m_interval;
    std::chrono::steady_clock::time_point m_lastPrintTime;
};

#endif // LOGGER_H