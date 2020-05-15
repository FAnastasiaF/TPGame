#include "Defend.h"

int Defend::execute(Army army) {
    return hostilities->defend(army);
}