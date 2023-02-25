#include <iostream>
#include <cmath>
#include "triangle.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	triangl mas[3];
	double a, b, c;

	for (int i = 0; i < 3; i++)
	{
		cout << "Введите стороны треугольника №" << i + 1 << "через пробел: " << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].get_exst_tr()))
		{
			mas[i].show();
			cout << "Треугольника с такими сторонами не существует, попробуйет еще раз" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		mas[i].show();
		cout << "Периметр треугольника: " << mas[i].perimetr() << endl;
		cout << "Плащадь треугольника: " << mas[i].square() << endl;
	}
	

	
	return 0;
}