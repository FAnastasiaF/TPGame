#pragma once

#include "War.h"
#include "ProxyCommunication.h"
#include <iostream>

class ProxyWar {
    std::shared_ptr<War> war = std::make_shared<War>();
public:
    int start(Army army, ProxyCommunication communication);
};
