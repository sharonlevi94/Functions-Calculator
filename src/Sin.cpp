#include "Sin.h"
#include <cmath>
#include <iostream>

double Sin::eval(double x) {
	return sin(x);
}

void Sin::print()const {
	std::cout << "sin(x)";
}