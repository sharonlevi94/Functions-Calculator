#pragma once
#include "Function.h"
#include <memory>
#include <vector>
/*-----------------------------------------------------------------------------*/
class Composite : public Function {
public:
    Composite(const shared_ptr<Function>&, const shared_ptr<Function>&);
    double eval(double) override;
    void print(shared_ptr<Function>) const override;
    string printWithValue(string)const override;
private:
    vector<shared_ptr<Function>> m_compFunc; 
};