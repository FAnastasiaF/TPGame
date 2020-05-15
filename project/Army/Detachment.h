#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "../Factories/FactoryBlack.h"
#include "../Factories/FactoryWhite.h"


class Detachment {
    std::vector<std::shared_ptr<Unit>> detachment;
public:
    void addBlack(std::string unit);
    void addWhite(std::string unit);
    void remove();
    void info();
    int Health = 0;
    int Power = 0;
};
