#include <cmath>
#include <iostream>
#include "eq2.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, c;
	double e, f, g;

	cout << "Enter a, b, c: " << endl;
	cin >> a >> b >> c;
	eq2 T(a, b, c);
	T.set(a, b, c);

	T.find_X();

	double x;
	cout << "Enter x to find y: " << endl;
	cin >> x;
	cout << T.find_Y(x);

	cout << endl;
	cout << "Enter a2, b2, c2 to sum up equation: " << endl;
	cin >> e >> f >> g;
	eq2 TT(a,b,c,e, f, g);
	TT.set(a, b, c, e, f, g);
	TT.equation_sum(a, b, c, e, f, g);

}
