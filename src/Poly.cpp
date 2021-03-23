#include "Poly.h"
#include <vector>
#include <cmath>

Poly::Poly(int n, vector<double> factors)
	: m_degree(n), m_factors(factors) {}

const vector<double>& Poly::getFactors()const  { return m_factors; }

std::ostream& operator<<(std::ostream& os, const Poly& p) {
	int i;
	for (i = p.getFactors().size() -1; i > 0 ; i--) {
		os << p.getFactors()[i] << "*" << "X^" << i << " + ";
	}
	os << p.getFactors()[i] << "*" << "X^" << i;
	return os;
}

double Poly::eval(double x) {
	int i;
	double sum = 0;
	for (i = 0; i <= m_degree; i++) {
		sum += m_factors[i] * (pow(x, i));
	}
	return sum;
}

void Poly::print(shared_ptr<Function>myPtr)const {
	int i;
	if (myPtr == nullptr) {
		for (i = m_factors.size() - 1; i > 0; i--) {
			std::cout << m_factors[i] << "*" << "X^" << i << " + ";
		}
		std::cout << m_factors[i] << "*" << "X^" << i;
	}
	else {
		for (i = m_factors.size() - 1; i > 0; i--) {
			std::cout << m_factors[i] << "*(";
			myPtr->print(nullptr);
			std::cout << ")^" << i << " + ";
		}
		std::cout << m_factors[i] << "*(";
		myPtr->print(nullptr);
		std::cout << ")^" << i;
	}
}