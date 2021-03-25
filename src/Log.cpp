#include "Log.h"
#include <iostream>

Log::Log(int base, std::shared_ptr<Function> ptr)
    : m_base(base), m_ptr(ptr) {}

double Log::eval(double x) {
    return (log(m_ptr->eval(x)))/(log(m_base));
}


/*
Output: log <N> <Function>
*/
void Log::print(shared_ptr<Function>myPtr)const {
    std::cout << "log " << this->m_base << " (";
    this->m_ptr->print(myPtr);
    std::cout << ")";
}

void Log::printWithValue(double x)const {
   
}