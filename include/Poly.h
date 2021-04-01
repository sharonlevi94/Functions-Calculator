#include <vector>
#include <iostream>
#include "Function.h"
/*-----------------------------------------------------------------------------*/
using std::vector;
/*-----------------------------------------------------------------------------*/
class Poly: public Function {
public:
	Poly(int, vector<double>);
	const vector<double>& getFactors()const;
	virtual double eval(double) override;
	virtual string print(string)const override;
private:
	int m_degree;
	vector<double> m_factors;
};