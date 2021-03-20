#include <vector>
#include <iostream>
using std::vector;

class Poly {
public:
	Poly(int, vector<double>);
	const vector<double>& getFactors()const;
private:
	int m_degree;
	vector<double> m_factors;
};

std::ostream& operator<< (std::ostream& os, const Poly& p);