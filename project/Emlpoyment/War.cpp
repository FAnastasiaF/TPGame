#include "War.h"

int War::start(Army army) {
    int sum = 0;
    std::vector<std::shared_ptr<Command>> command;
    std::string String = "";
    std::cout << "Если вы хотите нападать, то напишите beat\n";
    std::cout << "Если вы хотите защищаться, то напишите defend\n";
    std::cout << "Eсли вы хотите отменить действие, то напишите undo\n";
    std::cout << "Если вы хотите закончить, то напишите end\n";
    while(String != "end") {
        std::cin >> String;
        if (String == "beat") {
            command.push_back(std::make_shared<Beat>());
        } else if(String == "defend") {
            command.push_back(std::make_shared<Defend>());
        } else if(String == "end") {
            for (int i = 0; i < command.size(); ++i) {
                sum += command[i]->execute(army);
            }
            return sum;
        } else if (String == "undo"){
            if(!command.empty()) {
                command.pop_back();
            }
        }else {
                std::cout << "Нет такого действия. Повторите ещё раз\n";
        }
    }
}

