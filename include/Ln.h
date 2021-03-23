#pragma once
#include "Function.h"

class Ln: public Function {
	virtual double eval(double) override;
	virtual void print(shared_ptr<Function>)const override;
};