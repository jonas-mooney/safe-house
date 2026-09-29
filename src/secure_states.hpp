#ifndef SECURE_STATES_H
#define SECURE_STATES_H

#include <cstdint>

enum class SecurityState : uint8_t {
    Disarmed,       // System is off; interior and perimeter sensors are ignored
    ArmedHome,      // Perimeter active (doors/windows), interior motion sensors ignored
    ArmedAway,      // All sensors active (perimeter + interior motion)
    ArmedNight,     // Perimeter + specific interior zones (e.g., downstairs motion active, upstairs ignored)
    PendingArm,     // Exit delay active (giving the user time to exit the house)
    PendingDisarm,  // Entry delay active (giving the user time to enter the PIN)
    Triggered,      // A sensor was tripped while armed; countdown before sounding alarm
    Alarm,          // Active breach; sirens sounding and notifications sending
    Bypassed        // System is active, but specific faulted sensors are temporarily ignored
};

#endif