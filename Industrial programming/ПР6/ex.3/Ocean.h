#pragma once
#include <iostream>
#include <cmath>


using namespace std;

class Ocean
{
protected:
	string name;
	string location;
	double volume; //объем км^3
	double depth;  //метры
	double area;   //площадь км^2

public:
	//конструкторы
	Ocean();
	Ocean(string n, string l, double v, double d, double a);
	
	string getName();

	//перегрузка
	friend ostream& operator<<(ostream& os, const Ocean& o);



};

