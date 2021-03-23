#pragma once
#include "Function.h"
#include <memory>
#include <vector>

class Multiply : public Function {
public:
    Multiply(const shared_ptr<Function>&, const shared_ptr<Function>&);
    double eval(double) override;
    void print() const override;
private:
    vector<shared_ptr<Function>> m_mulFunc; //???
};