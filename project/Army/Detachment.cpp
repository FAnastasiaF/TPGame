#include "Detachment.h"

void Detachment::addBlack(std::string unit) {
    std::shared_ptr<FactoryUnit> blackfactory = std::make_shared<FactoryBlack>();
    if(unit == "Wizard") {
        detachment.push_back(blackfactory->CreateWizard());
    } else if(unit == "Elf") {
        detachment.push_back(blackfactory->CreateElf());
    } else if(unit == "Giant") {
        detachment.push_back(blackfactory->CreateGiant());
    } else {
        std::cout << "Wrong name unit.\n";
        exit(0);
    }
    Health += detachment[detachment.size() - 1]->health();
    Power  += detachment[detachment.size() - 1]->power();
}


void Detachment::addWhite(std::string unit) {
    std::shared_ptr<FactoryUnit> whitefactory = std::make_shared<FactoryWhite>();
    if(unit == "Wizard") {
        detachment.push_back(whitefactory->CreateWizard());
    } else if(unit == "Elf") {
        detachment.push_back(whitefactory->CreateElf());
    } else if(unit == "Giant") {
        detachment.push_back(whitefactory->CreateGiant());
    } else {
        std::cout << "Wrong name unit.\n";
        exit(0);
    }
    Health += detachment[detachment.size() - 1]->health();
    Power  += detachment[detachment.size() - 1]->power();
}


void Detachment::remove() {
    Health -= detachment[detachment.size() - 1]->health();
    Power  -= detachment[detachment.size() - 1]->power();
    detachment.pop_back();
}


void Detachment::info() {
     std::cout << "Health = " << Health << std::endl;
     std::cout << "Power = " << Power << std::endl;
}
