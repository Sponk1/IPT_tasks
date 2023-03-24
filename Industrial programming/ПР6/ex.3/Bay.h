#pragma once
#include <iostream>
#include <string>
#include "Sea.h"


using namespace std;

class Bay : public Sea
{
protected:
	Sea* seaParent;
	string name;
	string location;
	double volume; //объем км^3
	double depth;  //метры
	double area;   //площадь км^2

public:
	//конструкторы
	Bay();
	Bay(string n, double d, double a);
	Bay(string n, Sea* _seaParent);

	void setParent(Sea* _seaParent);
	Sea* getParent();

	//перегрузка ввода
	friend ostream& operator<<(ostream& os, const Bay& o);
};
