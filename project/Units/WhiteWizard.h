#pragma once

#include "Wizard.h"

class WhiteWizard: public Wizard {
public:
    int health() const override;
    int power() const override;
    ~WhiteWizard() override = default;
};
