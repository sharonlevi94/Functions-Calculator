#include "Menu.h"
#include "Add.h"
#include "Sin.h"
#include "Composite.h"
#include "Ln.h"
#include "Poly.h"
#include "Log.h"
#include "Multiply.h"
#include <memory>
#include <iostream>
#include <iomanip>
#include "Utilities.h"
/*-----------------------------------------------------------------------------*/
using std::shared_ptr;
using std::string;
/*-----------------------------------------------------------------------------*/
Menu::Menu() {
    //creating the initial functions in the list:
    this->m_functionList.push_back(std::make_shared <Sin>());
    this->m_functionList.push_back(std::make_shared <Ln>());
}
/*-----------------------------------------------------------------------------*/
void Menu::showMenu()const {
    string x = "x";
    std::cout << "This is the function list:" << std::endl;
    for (int i = 0; i < this->m_functionList.size(); i++) {
        std::cout << i << ": ";
        std::cout << this->m_functionList[i]->print(x);
        std::cout << std::endl;
    }
    std::cout << "Please enter a command ('help' for command list):";
}
/*-----------------------------------------------------------------------------*/
void Menu::deleteFunction() {
    int funcToDelete;
    std::cin >> funcToDelete;
    areChoicesValid(funcToDelete, funcToDelete); // sending same parameter to  avoid code repeats.lo
    this->m_functionList.erase(this->m_functionList.begin() + funcToDelete);
}
/*-----------------------------------------------------------------------------*/
int Menu::getSize()const {
    return this->m_functionList.size();
}
/*-----------------------------------------------------------------------------*/
void Menu::eval(){
    int arg1;
    double arg2;
    std::cin >> arg1 >> arg2;
    areChoicesValid(arg1,arg1); // sending same parameter to  avoid code repeats.
    if (arg1 <= this->getSize())
        std::cout << std::endl;
    std::cout << this->m_functionList[arg1]->print(ConvertToStr(arg2));
    std::cout << "=";
    std::cout << std::setprecision(2) <<
              this->m_functionList[arg1]->eval(arg2) << std::endl;
}
/*-----------------------------------------------------------------------------*/
void Menu::createPoly() {
    double arg1,arg2;
    std::cin >> arg1;
    vector<double> factors;
    for (int i = 0; i <= arg1; i++) {
        std::cin >> arg2;
        factors.push_back(arg2);
    }
    this->m_functionList.push_back(std::make_shared <Poly>(arg1,factors));
}
/*-----------------------------------------------------------------------------*/
void Menu::multiplyFunctions() {
    int arg1, arg2;
    std::cin >> arg1 >> arg2;
    areChoicesValid(arg1, arg2);
    this->m_functionList.push_back(std::make_shared<Multiply>
                                           (this->m_functionList[arg1], this->m_functionList[arg2]));
}
/*-----------------------------------------------------------------------------*/
void Menu::addFunctions() {
    int arg1, arg2;
    std::cin >> arg1 >> arg2;
    areChoicesValid(arg1, arg2);
    this->m_functionList.push_back(std::make_shared<Add>
                                           (this->m_functionList[arg1], this->m_functionList[arg2]));
}
/*-----------------------------------------------------------------------------*/
void Menu::compFunctions() {
    int arg1, arg2;
    std::cin >> arg1 >> arg2;
    areChoicesValid(arg1, arg2);
    this->m_functionList.push_back(std::make_shared<Composite>
                                           (this->m_functionList[arg1], this->m_functionList[arg2]));
}
/*-----------------------------------------------------------------------------*/
void Menu::logFunctions() {
    int base, function_num;
    std::cin >> base >> function_num;
    areChoicesValid(function_num, function_num); // sending same parameter to  avoid code repeats.
    this->m_functionList.push_back(std::make_shared<Log>
                                           (base, this->m_functionList[function_num]));
}
/*-----------------------------------------------------------------------------*/
bool Menu::isChoiceExists(int func1, int func2) const {
    if (func1 < m_functionList.size() and func2 < m_functionList.size()) return true;
    return false;
}
/*-----------------------------------------------------------------------------*/
void Menu::areChoicesValid(int& arg1, int& arg2) {
    while (not isChoiceExists(arg1, arg2)) {
        std::cout << "Wrong function selection. Enter your function choices again: \n";
        if (arg1 == arg2) { // means we sent same parameter(to avoid writing a new function)
            std::cin >> arg1;
            arg2 = arg1;
        } else
            std::cin >> arg1 >> arg2;
    }
}
