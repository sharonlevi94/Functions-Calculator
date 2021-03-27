#pragma once
#include "Function.h"

class Ln: public Function {
    double eval(double) override;
	void print(shared_ptr<Function>)const override;
	virtual void printWithValue(double)const override;
};