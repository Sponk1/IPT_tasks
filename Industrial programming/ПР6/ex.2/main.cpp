#include <cmath>
#include <iostream>
#include <Windows.h>
#include "cone.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	Cone baseCone(1,1,1,10,15);
	cout << "Base cone: " << baseCone;
	cout << "Square = " << baseCone.area() << endl;
	cout << "Volume = " << baseCone.volume() << endl;
	cout << "---------------------------------------" << endl;

	truncatedCone cone1(10,10 ,2.5);
	truncatedCone cone2(10, 6, 4.4);
	cone1.setVolume(baseCone.volume());
	cout << "Truncated cone 1: " << cone1;
	cout << "Square = " << cone1.area() << endl;
	cout << "Volume = " << cone1.volume() << endl;
	cout << endl;
	cone2.setVolume(baseCone.volume());
	cout << "Truncated cone 2: " << cone2;
	cout << "Square = " << cone2.area() << endl;
	cout << "Volume = " << cone2.volume() << endl;

	cout << "Comparison: ";
	cone1.comparison(cone1, cone2);
	cout << endl << "---------------------------------------" << endl;
	truncatedCone cone3;
	cout << "function overloading" << endl;
	cin >> cone3;
	cout << cone3;
}
