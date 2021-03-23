#include <iostream>
#include "Add.h"

Add::Add(const shared_ptr<Function>& ptr1, const shared_ptr<Function>& ptr2) {
    const std::shared_ptr<Function>&x = ptr1;
    const std::shared_ptr<Function>&y = ptr2;
    this->m_addFunc.push_back(x);
    this->m_addFunc.push_back(y);
}

double Add::eval(double x) {
    return (this->m_addFunc[0]->eval(x) + this->m_addFunc[1]->eval(x));
}

void Add::print(shared_ptr<Function>myPtr) const {
    std::cout << "( "; this->m_addFunc[0]->print(nullptr);
    std::cout << ") + ( "; this->m_addFunc[1]->print(nullptr);
    std::cout <<" )";
}