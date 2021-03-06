#include "Multiply.h"
#include <iostream>
/*-----------------------------------------------------------------------------*/
Multiply::Multiply(const shared_ptr<Function>& ptr1, const shared_ptr<Function>& ptr2) {
    const std::shared_ptr<Function>&x = ptr1;
    const std::shared_ptr<Function>&y = ptr2;
    this->m_mulFunc.push_back(x);
    this->m_mulFunc.push_back(y);
}
/*-----------------------------------------------------------------------------*/
double Multiply::eval(double x) {
    return (this->m_mulFunc[0]->eval(x) * this->m_mulFunc[1]->eval(x));
}
/*-----------------------------------------------------------------------------*/
string Multiply::print(string x)const {
    string str = "(" + this->m_mulFunc[0]->print(x) + ")*(" +
        this->m_mulFunc[1]->print(x) + ")";
    return str;
}