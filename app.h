#pragma once

#include "sortHelper.h"
#include "timer.h"
#include <functional>
#include <iostream>

class App {
public:
    void run();
    static App* getInstance();

private:
    static App* instance_;
    App();
};
