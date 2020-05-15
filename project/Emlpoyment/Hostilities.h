#pragma once

#include "../Army/Army.h"
#include <stdlib.h>

class Hostilities {
    int Health;
    int Power;
public:
    void randArmy(Army army);
    int beat(Army army);
    int defend(Army army);
    int end();
};

