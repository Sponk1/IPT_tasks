#pragma once
#include <cmath>
#include <iostream>

using namespace std;

class eq2
{
private:
	double a, b, c;
	double e, f, g;
	double D;

public:
	eq2(double a1, double b1, double c1);
	eq2(double a1, double b1, double c1, double e1, double f1,double g1);
	void set(double a1, double b1, double c1, double e1, double f1, double g1);
	void set(double a1, double b1, double c1);
	double find_X();
	double find_Y(double x1);
	void equation_sum(double a1, double b1, double c1, double e1, double f1, double g1);
};

