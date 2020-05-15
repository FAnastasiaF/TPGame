#pragma once

#include "Elf.h"

class BlackElf: public Elf {
public:
    int health() const override;
    int power() const override;
    ~BlackElf() override = default;
};

