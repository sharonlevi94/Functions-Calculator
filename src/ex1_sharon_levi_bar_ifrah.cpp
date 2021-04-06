/*-------------------------------include section-------------------------------*/
#include <iostream>
#include "Menu.h"
#include <map>
#include "Macros.h"
#include "Utilities.h"
#include<ios>
// for numeric_limits
#include<limits>
/*--------------------------------using section--------------------------------*/
using std::vector;
using std::string;
using std::map;
using std::cin;
using std::numeric_limits;
using std::streamsize;
/*--------------------------------enum section---------------------------------*/
enum Commands { eval, poly, mul, add, comp, logn, del, help, exitt};
/*------------------------------prototypes section-----------------------------*/
void setCommandsList(map<string, Commands>&);
/*--------------------------------main section---------------------------------*/
int main() {
    Menu list;
    map<string, Commands> command_list;
    string command;
    //setting a map with the commands as a strings (value) and as a enum (key)
    setCommandsList(command_list);

    while (true) {
        list.showMenu();
        std::cin >> command;
        auto it = command_list.find(command);
        if (it != command_list.end()) {
            switch (it->second) {
                case eval:
                    list.eval();
                    break;
                case poly:
                    list.createPoly();
                    break;
                case mul:
                    list.multiplyFunctions();
                    break;
                case add:
                    list.addFunctions();
                    break;
                case comp:
                    list.compFunctions();
                    break;
                case logn:
                    list.logFunctions();
                    break;
                case del:
                    list.deleteFunction();
                    break;
                case help:
                    printHelp();
                    break;
                default:
                    std::cout << "Goodbye" << std::endl;
                    return EXIT_SUCCESS;
            }
        }
        else {
            std::cout << "command not found, please try again..." << std::endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        std::cout << std::endl;
    }
}
/*----------------------------functions section--------------------------------*/

void setCommandsList(map<string,Commands>& commands) {
    commands.insert(std::pair<string, Commands>(EVAL, eval));
    commands.insert(std::pair<string, Commands>(POLY, poly));
    commands.insert(std::pair<string, Commands>(MUL, mul));
    commands.insert(std::pair<string, Commands>(ADD, add));
    commands.insert(std::pair<string, Commands>(COMP, comp));
    commands.insert(std::pair<string, Commands>(LOGN, logn));
    commands.insert(std::pair <string, Commands>(DEL, del));
    commands.insert(std::pair<string, Commands>(HELP, help));
    commands.insert(std::pair<string, Commands>(EXIT, exitt));
}
/*-----------------------------------------------------------------------------*/




