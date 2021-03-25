#pragma once
#include "Function.h"

class Log : public Function {
public:
	Log(int, std::shared_ptr<Function>);
	virtual double eval(double) override;
	virtual void print(shared_ptr<Function>)const override;
	virtual void printWithValue(double)const override;
private:
	int m_base;
	std::shared_ptr<Function> m_ptr;
};