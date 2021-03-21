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
using std::cin;

//enum section:
enum Commands { eval, poly, mul, add, comp, logn, del, help, exitt};

//prototypes section:
void setCommandsList(map<string, Commands>&);
void printHelp();

//main section:
int main() {
    Menu list;
    map<string, Commands> command_list;
    string command;
    double arg1, arg2;

    setCommandsList(command_list);

    while (true) {
        list.showMenu();
        std::cin >> command;
        auto it = command_list.find(command);
        if (it != command_list.end()) {
            switch (it->second) {
            case eval:
                cin >> arg1 >> arg2;
                if (arg1 <= list.getSize())
                    list.eval(arg1, arg2);
                break;
            case poly:
                list.createPoly();
                break;
            case mul:
                cin >> arg1 >> arg2;
                break;
            case add:
                cin >> arg1 >> arg2;
                break;
            case comp:
                cin >> arg1 >> arg2;
                break;
            case logn:
                cin >> arg1 >> arg2;
                break;
            case del:
                int arg;
                cin >> arg;
                if(arg<=list.getSize())
                    list.deleteFunction(arg);
                break;
            case help:
                printHelp();
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
    commands.insert(std::pair <string, Commands>(DEL, del));
    commands.insert(std::pair<string, Commands>(HELP, help));
    commands.insert(std::pair<string, Commands>(EXIT, exitt));
}

void printHelp() {
        std::cout << std::endl <<
        "Following is the list of the calculator's available commands:\n" <<
        "eval(uate) num x - Evaluates function #num on x\n" <<
        "poly(nomial) N c0 c1 ... cN - 1 - Creates a polynomial with N coefficients\n" <<
        "mul(tiply) num1 num2 - Creates a function that is the multiplication of\n" <<
        "function #num1 and function #num2\n" <<
        "add num1 num2 - Creates a function that is the sum of function #num1 and\n" <<
        "function #num2\n" <<
        "comp(osite) num1 num2 - Creates a function that is the composition of\n" <<
        "function #num1 and function #num2\n" <<
        "log N num - Creates a function that computes log N of function #num\n" <<
        "del(ete) num - Deletes function #num from function list\n" <<
        "help - Prints this help screen\n" <<
        "exit - Exits the program\n" << std::endl;
}