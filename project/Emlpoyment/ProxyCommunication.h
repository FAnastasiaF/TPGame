#pragma once

#include "Communication.h"
#include <iostream>
#include <memory>

class ProxyCommunication {
    std::shared_ptr<Communication> communication = std::make_shared<Communication>();
public:
    bool off();
    void start();
    int now();
    int end();
};

