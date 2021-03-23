#include "Sin.h"
#include <cmath>
#include <iostream>

double Sin::eval(double x) {
	return sin(x);
}

void Sin::print(shared_ptr<Function> myPtr)const {
    if (myPtr == nullptr)
        std::cout << "sin(x)";
    else {
        std::cout << "sin("; myPtr->print(nullptr);
        std::cout << ")";
   }
}

void Sin::printWithValue(double x)const {
    std::cout << "sin(" << x << ") ";
}