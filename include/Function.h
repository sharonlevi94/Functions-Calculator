#pragma once
#include <vector>
#include <shared_mutex>
#include <memory>
#include <string>
/*-----------------------------------------------------------------------------*/
using std::vector;
using std::shared_ptr;
using std::string;
/*-----------------------------------------------------------------------------*/
class Function {
public:
	Function();
	virtual double eval(double) = 0;
	virtual void print(shared_ptr<Function>)const = 0;
	virtual string printWithValue(string)const = 0;
};



