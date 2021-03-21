//include section:
#include <iostream>
#include "Poly.h"
#include "Menu.h"
#include <string>
#include <map>
#include "Macros.h"
//using section:
using std::vector;
using std::string;
using std::map;
//enum section:
enum Commands { eval=0, poly, mul, add, comp, logn, del, help, exitt};
//prototypes section:
void setCommandsList(map<string, Commands>&);
//main section:
int main() {
    Menu list;
    map<string, Commands> command_list;
    while (true) {
        list.showMenu();
        string command,args;
        setCommandsList(command_list);
        std::cin >> command >> args;
        auto it = command_list.find(command);
        if (it != command_list.end()) {
            switch (it->second) {
            case eval:
                break;
            case poly:
                break;
            case mul:
                break;
            case add:
                break;
            case comp:
                break;
            case logn:
                break;
            case del:
                break;
            case help:
                break;
            default:
                std::cout << "Goodbye" << std::endl;
                return EXIT_SUCCESS;
            }
        }
        else 
            std::cout << "command not found, please try again..." << std::endl;
        
    }
    
    return EXIT_SUCCESS;
}

//functions section:
void setCommandsList(map<string,Commands>& commands) {
    commands.insert(std::pair<string, Commands>(EVAL, eval));
    commands.insert(std::pair<string, Commands>(POLY, poly));
    commands.insert(std::pair<string, Commands>(MUL, mul));
    commands.insert(std::pair<string, Commands>(ADD, add));
    commands.insert(std::pair<string, Commands>(COMP, comp));
    commands.insert(std::pair<string, Commands>(LOGN, logn));
    commands.insert(std::pair<string, Commands>(DEL, del));
    commands.insert(std::pair<string, Commands>(HELP, help));
    commands.insert(std::pair<string, Commands>(EXIT, exitt));
}