#include "Ln.h"
#include <cmath>
#include <iostream>

double Ln::eval(double x) {
	return log(x);
}

void Ln::print()const {
	std::cout << "ln(x)";
}