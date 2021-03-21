#pragma once
#include "Function.h"

class Sin: public Function {
public:
	virtual double eval(double) override;
	virtual void print()const override;
};