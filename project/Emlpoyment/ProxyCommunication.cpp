#include "ProxyCommunication.h"


bool ProxyCommunication::off() {
    return communication->off();
}

void ProxyCommunication::start() {
    if(communication->off()) {
        communication->start();
    }
    else {
        std::cout << "Вы уже занимаетесь развитием связей.\n";
    }
}

int ProxyCommunication::now() {
    if(communication->off()) {
        std::cout << "Вы ещё не начали развитие связей\n";
        return 0;
    } else {
        return communication->now();
    }
}

int ProxyCommunication::end() {
    if(communication->off()) {
        std::cout << "Вы ещё не начали развитие связей\n";
        return 0;
    } else {
        return communication->end();
    }
}