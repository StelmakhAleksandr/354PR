#pragma once

#include <chrono>

class Timer {
public:
    using clock = std::chrono::high_resolution_clock;
    using seconds = std::chrono::duration<double, std::ratio<1>>;
    Timer();
    void start();
    double elapsed();

private:
    std::chrono::time_point<clock> beginTime_;
};
