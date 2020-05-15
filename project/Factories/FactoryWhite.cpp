#include "FactoryWhite.h"
#include "../Units/WhiteWizard.h"
#include "../Units/WhiteElf.h"
#include "../Units/WhiteGiant.h"

std::shared_ptr<Wizard> FactoryWhite::CreateWizard() {
    return std::make_shared<WhiteWizard>();
}

std::shared_ptr<Elf> FactoryWhite::CreateElf() {
    return std::make_shared<WhiteElf>();
}

std::shared_ptr<Giant> FactoryWhite::CreateGiant() {
    return std::make_shared<WhiteGiant>();
}