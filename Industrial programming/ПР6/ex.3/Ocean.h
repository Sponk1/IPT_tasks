#pragma once
#include <iostream>
#include <cmath>


using namespace std;

class Ocean
{
protected:
	string name;
	string location;
	double volume; //����� ��^3
	double depth;  //�����
	double area;   //������� ��^2

public:
	//������������
	Ocean();
	Ocean(string n, string l, double v, double d, double a);
	
	string getName();

	//����������
	friend ostream& operator<<(ostream& os, const Ocean& o);



};

