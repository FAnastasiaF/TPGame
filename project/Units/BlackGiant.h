#pragma once

#include "Giant.h"

class BlackGiant: public Giant {
public:
    int health() const override;
    int power() const override;
    ~BlackGiant() override = default;
};
