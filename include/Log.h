#pragma once
#include "Function.h"

class Log : public Function {
public:
	Log(int, std::shared_ptr<Function> );
	double eval(double) override;
	void print(shared_ptr<Function>)const override;
	void printWithValue(double)const override;
private:
	int m_base;
	std::shared_ptr<Function> m_ptr;
};