#include "Sin.h"
#include <cmath>
#include <iostream>
/*-----------------------------------------------------------------------------*/
double Sin::eval(double x) {
	return sin(x);
}
/*-----------------------------------------------------------------------------*/
string Sin::print(string x)const {
    return "sin(" +  x + ")";
}