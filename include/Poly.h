#include <vector>
#include <iostream>
#include "Function.h"
using std::vector;

class Poly: public Function {
public:
	Poly(int, vector<double>);
	const vector<double>& getFactors()const;
	virtual double eval(double) override;
	virtual void print()const override;
private:
	int m_degree;
	vector<double> m_factors;
};

std::ostream& operator<< (std::ostream& os, const Poly& p);