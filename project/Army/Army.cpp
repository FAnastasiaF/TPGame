#include "Army.h"


void Army::add(Detachment d) {
    army.push_back(std::make_shared<Detachment>(d));
    Health += army[army.size() - 1]->Health;
    Power  += army[army.size() - 1]->Power;
}


void Army::info() {
    std::cout << "Health = " << Health << std::endl;
    std::cout << "Power = " << Power << std::endl;
}

int Army::power() {
    return Power;
}

int Army::health() {
    return Health;
}
