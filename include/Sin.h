#pragma once
#include "Function.h"

class Sin: public Function {
public:
	virtual double eval(double) override;
	virtual void print(shared_ptr<Function>)const override;
	virtual void printWithValue(double)const override;
};