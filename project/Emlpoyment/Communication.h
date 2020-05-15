#pragma once

#include <ctime>


class Communication {
    bool OFF = true;
    float timestart{};
public:
    bool off();
    void start();
    int now();
    int end();
};

