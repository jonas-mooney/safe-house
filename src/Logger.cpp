#include "Logger.h"
#include <iostream>

Logger::Logger(std::chrono::seconds interval)
    : m_interval(interval),
      m_lastPrintTime(std::chrono::steady_clock::now()) {}

void Logger::update(uint8_t systemState) {
    auto currentTime = std::chrono::steady_clock::now();
    
    if (currentTime - m_lastPrintTime >= m_interval) {
        std::cout << "[Periodic Alert] Current Security State Value: " 
                  << static_cast<int>(systemState) << "\n";
        m_lastPrintTime = currentTime;
    }
}