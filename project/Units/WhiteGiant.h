#pragma once

#include "Giant.h"

class WhiteGiant: public Giant {
public:
    int health() const override;
    int power() const override;
    ~WhiteGiant() override = default;
};

