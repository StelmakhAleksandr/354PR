#include "timer.h"

Timer::Timer()
{
}

void Timer::start()
{
    beginTime_ = clock::now();
}

double Timer::elapsed()
{
    return std::chrono::duration_cast<seconds>(clock::now() - beginTime_).count();
}
