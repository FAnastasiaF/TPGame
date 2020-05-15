#pragma once

#include "FactoryUnit.h"

class FactoryBlack : public FactoryUnit {
public:
    std::shared_ptr<Wizard> CreateWizard() override;
    std::shared_ptr<Elf> CreateElf() override;
    std::shared_ptr<Giant> CreateGiant() override;
};
