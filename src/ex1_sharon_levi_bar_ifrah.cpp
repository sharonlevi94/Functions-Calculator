#include <iostream>
#include "Poly.h"
using std::vector;

int main() {
    vector<double> factors{ 1,1,1 };
    Poly p(2, factors);
    std::cout << p << std::endl;
    return 0;
}
