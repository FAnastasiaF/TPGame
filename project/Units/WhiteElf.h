#pragma once

#include "Elf.h"

class WhiteElf: public Elf {
public:
    int health() const override;
    int power() const override;
    ~WhiteElf() override = default;
};