#pragma once
#include "Function.h"
/*-----------------------------------------------------------------------------*/
class Log : public Function {
public:
	Log(int, std::shared_ptr<Function> );
	virtual double eval(double) override;
	virtual string print(string)const override;
private:
	int m_base;
	std::shared_ptr<Function> m_ptr;
};