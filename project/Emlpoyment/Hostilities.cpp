#include "Hostilities.h"


void Hostilities::randArmy(Army army) {
    Health = army.health()*(rand()%5+9)/10;
    Power = army.power()*(rand()%5+9)/10;
}

int Hostilities::beat(Army army) {
    randArmy(army);
    std::cout << "Enemy:\n" << Health << "\n" << Power << "\n";
    std::cout << "You:\n" << army.health() << "\n" << int(1.2*army.power()) << "\n";
    if(army.health()/Power > Health/(1.2*army.power())) {
        return 2;
        std::cout<<"You win\n";
    } else if(army.health()/Power == Health/(1.2*army.power())) {
        return 1;
        std::cout<<"Draw\n";
    } else {
        std::cout<<"You lose\n";
        return 0;
    }
}

int Hostilities::defend(Army army) {
    randArmy(army);
    std::cout << "Enemy:\n" << Health << "\n" << Power << "\n";
    std::cout << "You:\n" << int(1.2*army.health()) << "\n" << army.power() << "\n";
    if(army.health()/Power > Health/(1.2*army.power())) {
        return 2;
        std::cout<<"You win\n";
    } else if(army.health()/Power == Health/(1.2*army.power())) {
        return 1;
        std::cout<<"Draw\n";
    } else {
        std::cout<<"You lose\n";
        return 0;
    }
}