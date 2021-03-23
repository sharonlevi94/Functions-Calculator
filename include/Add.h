#pragma once
#include "Function.h"
#include <memory>
#include <vector>

class Add : public Function {
public:
    Add(const shared_ptr<Function>&, const shared_ptr<Function>&);
    double eval(double) override;
    void print(shared_ptr<Function>) const override;
    virtual void printWithValue(double)const override;

private:
    vector<shared_ptr<Function>> m_addFunc;
};