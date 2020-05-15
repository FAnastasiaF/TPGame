#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "Detachment.h"

class Army : Detachment {
    std::vector<std::shared_ptr<Detachment>> army;
public:
    void add(Detachment d);
    void info();
    int health();
    int power();
};



