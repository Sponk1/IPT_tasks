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
	double volume; //����� ��^3
	double depth;  //�����
	double area;   //������� ��^2

public:
	//������������
	Bay();
	Bay(string n, double d, double a);
	Bay(string n, Sea* _seaParent);

	void setParent(Sea* _seaParent);
	Sea* getParent();

	//���������� �����
	friend ostream& operator<<(ostream& os, const Bay& o);
};
