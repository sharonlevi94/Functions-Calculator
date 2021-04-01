#pragma once
#include "Function.h"
#include <memory>
#include <vector>
/*-----------------------------------------------------------------------------*/
class Composite : public Function {
public:
    Composite(const shared_ptr<Function>&, const shared_ptr<Function>&);
    virtual double eval(double) override;
    virtual string print(string)const override;
private:
    vector<shared_ptr<Function>> m_compFunc; 
};