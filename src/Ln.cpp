#include "Ln.h"
#include <cmath>
#include <iostream>
/*-----------------------------------------------------------------------------*/
double Ln::eval(double x) {
	return log(x);
}
/*-----------------------------------------------------------------------------*/
string Ln::print(string x)const {
    return "ln(" + x + ")";
}