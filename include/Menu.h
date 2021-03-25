#pragma once
#include "Function.h"
#include <memory>
using std::shared_ptr;

class Menu {
public:
    Menu();  
    void eval(double,double);
    void showMenu()const;
    void deleteFunction(int);
    void createPoly();
    int getSize()const;
    void multiplyFunctions();
    void addFunctions();
    void compFunctions();
    void logFunctions();
private:
    vector<shared_ptr<Function>> m_functionList;
};