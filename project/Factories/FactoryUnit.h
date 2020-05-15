#pragma once

#include <memory>
#include "../Units/Wizard.h"
#include "../Units/Elf.h"
#include "../Units/Giant.h"


class FactoryUnit {
public:
    virtual std::shared_ptr<Wizard> CreateWizard() = 0;
    virtual std::shared_ptr<Elf> CreateElf() = 0;
    virtual std::shared_ptr<Giant> CreateGiant() = 0;
};
