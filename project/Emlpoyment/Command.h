#pragma once
#include "Hostilities.h"
#include <memory>
#include "../Army/Army.h"


class Command {
public:
    virtual int execute(Army army) = 0;
protected:
    std::shared_ptr<Hostilities> hostilities = std::make_shared<Hostilities>();
};

