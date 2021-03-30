#pragma once
#include <vector>
#include <shared_mutex>
#include <memory>
/*-----------------------------------------------------------------------------*/
using std::vector;
using std::shared_ptr;
/*-----------------------------------------------------------------------------*/
class Function {
public:
	Function();
	virtual double eval(double) = 0;
	virtual void print(shared_ptr<Function>)const = 0;
	virtual void printWithValue(double)const = 0;
};



