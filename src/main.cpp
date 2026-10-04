#include <iostream>
#include <chrono>
#include "Logger.hpp"
#include "secure_states.hpp"

int main() {
    std::cout << "Running main loop... Press Ctrl+C to exit.\n";
    
    Logger statusLogger(std::chrono::seconds(5)); // Configurable interval
    auto lastPrintTime = std::chrono::steady_clock::now();

    SecurityState status = SecurityState::ArmedHome;
    
    while (true) {
        auto currentTime = std::chrono::steady_clock::now();
        
        // statusLogger.update(static_cast<uint8_t>(homeSystem.getState()));
        // statusLogger.update(static_cast<uint8_t>(88));
        statusLogger.update(static_cast<uint8_t>(status));
        
    }
    
    return 0;
}



// int x = 10;
// int y = 4;

// std::cout << "Sum: " << MathUtils::add(x, y) << "\n";
// std::cout << "Difference: " << MathUtils::subtract(x, y) << "\n";
// std::cout << "Average: " << MathUtils::average(x, y) << "\n";

// DefconTracker tracker1;
// tracker1.setDefconNumber(24);
// std::cout << "Defcon number: " << tracker1.getDefconNumber() << "\n";