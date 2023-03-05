#include "eq2.h"

eq2::eq2(double a1, double b1, double c1)
{
	a = a1; b = b1; c = c1;
	D = (b * b) - (4 * a * c);
}

eq2::eq2(double a1, double b1, double c1, double e1, double f1, double g1)
{
	a = a1; b = b1; c = c1; e = e1; f = f1; g = g1;
}

void eq2::set(double a1, double b1, double c1, double e1, double f1, double g1)
{
	a = a1; b = b1; c = c1; e = e1; f = f1; g = g1;
}


void eq2::set(double a1, double b1, double c1)
{
	a = a1; b = b1; c = c1;
	D = (b * b) - (4 * a * c);
}

double eq2::find_X()
{
	if (D < 0)
	{
		cout << "Âiscriminant is less than 0. There are no radicals" << endl;
		return 0;
	}
	else
	{
		if (D == 0) 
		{
			cout << "There is only 1 root of the equation: " << endl;
			double x = (b - sqrt(D)) / (2 * a);
			cout << x << endl;
			return x;
		}
		else
		{
			cout << "There are 2 roots of the equation, the higher: " << endl;
			double x1 = (b - sqrt(D)) / (2 * a);
			double x2 = (b + sqrt(D)) / (2 * a);
			if (x1 > x2) { cout << x1 << endl; return x1;}
			else { cout << x2 << endl; return x2; }
		}
	}
}

double eq2::find_Y(double x1)
{	
	cout << "Y = ";
	return a * x1 * x1 + b * x1 + c;
}

void eq2::equation_sum(double a1, double b1, double c1, double e1, double f1, double g1)
{
	cout << a + e << "x^2 + " << b + f << "x + " << c + g << "= 0" << endl;
}


