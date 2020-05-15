#include "ProxyWar.h"

int ProxyWar::start(Army army, ProxyCommunication communication) {
    if(communication.off()) {
        return war->start(army);
    }
    else {
        std::cout<<"Вы сейчас развиваете связи и не можете воевать.\n";
        return 0;
    }
}