//
// Created by Bar Ifrah on 19/03/2021.
//
#include <iostream>
#include "Poly.h"
using std::vector;

int main() {
    std::cout << "Hello, World!\n";
    vector<double> factors{ 1,1,1 };
    Poly p(2, factors);
    std::cout << p << std::endl;
    return 0;
}
