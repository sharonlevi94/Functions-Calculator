#include "Log.h"
#include <iostream>
#include <utility>
#include "Utilities.h"
/*-----------------------------------------------------------------------------*/
Log::Log(int base, std::shared_ptr<Function>  ptr)
    : m_base(base), m_ptr(std::move(ptr)) {}
/*-----------------------------------------------------------------------------*/
double Log::eval(double x) {
    return (log(m_ptr->eval(x)))/(log(m_base));
}
/*-----------------------------------------------------------------------------*/
/*
Output: log_<N> <Function>
*/
string Log::print(string x)const {
   string str = "log_" + ConvertToStr(m_base) + " (" +
   this->m_ptr->print(x) +
   + ") ";
   return str;
}