#pragma once
#include "Function.h"
#include <memory>
#include <vector>
/*-----------------------------------------------------------------------------*/
class Add : public Function {
public:
    Add(const shared_ptr<Function>&, const shared_ptr<Function>&);
    double eval(double) override;
    virtual string print(string)const override;

private:
    vector<shared_ptr<Function>> m_addFunc;
};