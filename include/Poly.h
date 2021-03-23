#include <vector>
#include <iostream>
#include "Function.h"
using std::vector;

class Poly: public Function {
public:
	Poly(int, vector<double>);
	const vector<double>& getFactors()const;
	double eval(double) override;
	void print(shared_ptr<Function>)const override;
private:
	int m_degree;
	vector<double> m_factors;
};

std::ostream& operator<< (std::ostream& os, const Poly& p);