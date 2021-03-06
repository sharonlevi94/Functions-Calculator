#include "Composite.h"
/*-----------------------------------------------------------------------------*/
Composite::Composite(const shared_ptr<Function>& ptr1, const shared_ptr<Function>& ptr2) {
    const std::shared_ptr<Function>&x = ptr1;
    const std::shared_ptr<Function>&y = ptr2;
    this->m_compFunc.push_back(x);
    this->m_compFunc.push_back(y);
}
/*-----------------------------------------------------------------------------*/
double Composite::eval(double x) {
    return (this->m_compFunc[0]->eval(this->m_compFunc[1]->eval(x)));
}
/*-----------------------------------------------------------------------------*/
string Composite::print(string x)const {
   return this->m_compFunc[0]->print
   (this->m_compFunc[1]->print(x));
}