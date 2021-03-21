#pragma once
#include "Function.h"
#include <memory>
using std::shared_ptr;

class Menu {
public:
    Menu(); //constructor    
    void showMenu()const;
private:
    vector<shared_ptr<Function>> m_functionList;
};