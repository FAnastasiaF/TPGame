#pragma once

#include "Wizard.h"

class BlackWizard: public Wizard {
public:
    int health() const override;
    int power() const override;
    ~BlackWizard() override = default;
};

