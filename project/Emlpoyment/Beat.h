#pragma once

#include "Command.h"
#include "../Army/Army.h"


class Beat: public Command {
public:
    int execute(Army army);
};
