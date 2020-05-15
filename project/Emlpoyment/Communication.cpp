#include "Communication.h"


bool Communication::off() {
    return OFF;
}

int Communication::now() {
    return int((clock()-timestart)/100);
}

void Communication::start() {
    timestart = clock();
    OFF = false;
}

int Communication::end() {
    OFF = true;
    return now();
}
