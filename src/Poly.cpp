#include "Poly.h"
#include <vector>

Poly::Poly(int n, vector<double> factors)
	: m_degree(n), m_factors(factors) {}

const vector<double>& Poly::getFactors()const  { return m_factors; }

std::ostream& operator<<(std::ostream& os, const Poly& p) {
	int i;
	for (i = 0; i < p.getFactors().size()-1 ; i++) {
		os << p.getFactors()[i] << "X^" << i << " + ";
	}
	os << p.getFactors()[i] << "X^" << i;
	return os;
}