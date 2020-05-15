#include "FactoryBlack.h"
#include "../Units/BlackWizard.h"
#include "../Units/BlackElf.h"
#include "../Units/BlackGiant.h"


std::shared_ptr<Wizard> FactoryBlack::CreateWizard() {
    return std::make_shared<BlackWizard>();
}

std::shared_ptr<Elf> FactoryBlack::CreateElf() {
    return std::make_shared<BlackElf>();
}

std::shared_ptr<Giant> FactoryBlack::CreateGiant() {
    return std::make_shared<BlackGiant>();
}