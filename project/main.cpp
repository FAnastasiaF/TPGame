#include <iostream>
#include <string>
#include "Army/Army.h"
#include "Emlpoyment/ProxyCommunication.h"
#include "Emlpoyment/ProxyWar.h"


int main() {
    int n;
    int sum = 0;
    Detachment detachment;
    Army army;
    std::string side;
    std::string unit;
    std::cout << "Выберите сторону: Black or White\n";
    std::cin >> side;
    if (side == "Black" || side == "White") {
        std::cout << side << "\n";
    } else {
        std::cout << "Неправильная сторона\n";
        return 0;
    }
    std::cout << "Добавим 3 отряда из 8 персонажей. В одном отряде может быть не менее 1 персонажа.\n";
    for(int j = 1; j <= 3; ++j) {
        std::cout << "Сколько персонажей вы хотите "
                     "добавить в " << j << " отряд?\n";
        std::cin >> n;
        if(n < 1) {
            std::cout << "Персонажей должно быть не менее 1 в отряде\n";
            return 0;
        }
        for(int i = 1; i <= n; ++i) {
            std::cout << "Выберите " << i << "-го персонажа отряда "<< j <<" : Wizard, Elf, Giant\n";
            std::cin >> unit;
            //unit = "Elf";
            if (side == "Black") {
                detachment.addBlack(unit);
            } else {
                detachment.addWhite(unit);
            }
        }
        army.add(detachment);
        for(int i = 0; i < n; ++i) {
            detachment.remove();
        }
        sum += n;
        if(6 - sum + j > 0 && j != 3) {
            std::cout << "Ещё надо распределить " << 8 - sum << "\n";
        } else if(j == 3 && sum == 8) {
            std::cout << "Вы создали армию. Параметры вашей армии:\n";
        } else {
            std::cout << "Персонажей должно быть 8\n";
            return 0;
        }
    }
    army.info();

    std::string str;
    ProxyCommunication communication;
    ProxyWar war;
    std::cout << "Вы должны выбрать режим игры.\n";
    std::cout << "Развитие связей или Война.\n";
    std::cout << "Если вы развиваете связи, то вы не можете начать войну.\n";
    std::cout << "Если вы выбираете Развитие связей, то вы можете добавить 1 персонажа раз в 5 секунд.\nНапишите CommunicationStart - для начала и CommunicationEnd - для конца.\nЕсли хотите узнать сколько персонажей вы добавите, если сейчас закончите напишите CommunicationNow.\n";
    std::cout << "Если вы выбираете Войну, то если вы выигрываете, то можете добавить 2 персонажей, иначе вы ничего не получаете. Напишите WarStart - для начала.\n";
    std::cout << "Напишите End, если хотите закончить игру\n";
    std::cout << "Напишите info, если хотите узнать о своей армии\n";
    std::cin >> str;
    while(str != "End") {
        if (str == "CommunicationStart") {
            communication.start();
        } else if (str == "CommunicationEnd") {
            n = communication.end();
            for (int i = 1; i <= n; ++i) {
                std::cout << "Выберите " << i << "-го персонажа: Wizard, Elf, Giant.\n";
                std::cin >> unit;
                if (side == "Black") {
                    detachment.addBlack(unit);
                } else {
                    detachment.addWhite(unit);
                }
            }
            if (n != 0) {
                army.add(detachment);
            }
            for (int i = 0; i < n; ++i) {
                detachment.remove();
            }
        } else if (str == "CommunicationNow") {
            std::cout << communication.now() << "\n";
        } else if (str == "WarStart") {
            n = war.start(army, communication);
            for (int i = 1; i <= n; ++i) {
                std::cout << "Выберите " << i << "-го персонажа: Wizard, Elf, Giant.\n";
                std::cin >> unit;
                if (side == "Black") {
                    detachment.addBlack(unit);
                } else {
                    detachment.addWhite(unit);
                }
            }
            if (n != 0) {
                army.add(detachment);
            }
            for (int i = 0; i < n; ++i) {
                detachment.remove();
            }
        } else if (str == "info") {
            army.info();
        }else {
            std::cout << "Такой команды нет.";
        }
        std::cin >> str;
    }
    return 0;
}
