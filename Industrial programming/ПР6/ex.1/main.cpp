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
	
	int x, y, z, r, h;

	Cone c1(3, 7);
	Cone c2(1, 2, 3, 5, 10);


	cout << "Конус с цнтром в начале координат: " << c1;
	cout << "Плащадь: " << c1.area() << endl;
	cout << "Объем: " << c1.volume() << endl;
	cout << endl;
	cout << "Произвольный конус: " << c2;
	cout << "Плащадь: " << c2.area() << endl;
	cout << "Объем: " << c2.volume() << endl;

	//динамический конус
	Cone* cone3 = new Cone();
	cout << "Введите координаты центра основания конуса:  ";
	cin >> x >> y >> z;
	cout << endl << "Введите радиус и высоту конуса: " ;
	cin >> r >> h;
	cone3->set(x, y, z, r, h);
	cone3->print();

	delete cone3;

	//двумерный массив с конусами
	char letters[5] = { 'x', 'y', 'z', 'r', 'h' };//обозначения
	unsigned nums = 5;//количество строк(значений x, y, z, r, h)
	unsigned cones = 3;//количество столбцов(конусов)

	int** numbers{ new int* [nums] {} };
	for (unsigned i{}; i < nums; i++)
	{
		numbers[i] = new int[cones] {};
	}
	for (unsigned i{}; i < nums; i++)
	{
		cout << "Введите значения для " << letters[i] << ": " << endl;
		//данные для столбцов i-той стрки
		for (unsigned j{}; j < cones; j++)
		{
			cout << "Конус номер: " << j + 1 << endl;
			cin >> numbers[i][j];
		}
	}
	//первое значение x y z, второе значение номер конуса
	Cone conus1(numbers[0][0], numbers[1][0], numbers[2][0], numbers[3][0], numbers[4][0]);
	Cone conus2(numbers[0][1], numbers[1][1], numbers[2][1], numbers[3][1], numbers[4][1]);
	Cone conus3(numbers[0][2], numbers[1][2], numbers[2][2], numbers[3][2], numbers[4][2]);
	cout << conus1;
	cout << conus2;
	cout << conus3;
}
