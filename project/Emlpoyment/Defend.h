#pragma once

#include "Command.h"
#include "../Army/Army.h"


class Defend: public Command {
public:
    int execute(Army army);
};

