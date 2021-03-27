#pragma once
#include "Function.h"

class Sin: public Function {
public:
	double eval(double) override;
	void print(shared_ptr<Function>)const override;
	void printWithValue(double)const override;
};