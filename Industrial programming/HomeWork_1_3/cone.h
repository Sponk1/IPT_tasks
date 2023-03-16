#pragma once

#include <iostream>

using namespace std;

class Cone
{
private:
	double x, y, z;
	double radius;
	double height;
public:
	//������������
	Cone();
	Cone(double r, double h);
	Cone(double a, double b, double c, double r, double h);

	// ������� �������
	void set(double a, double b, double c, double r, double h);
	void setCoordiante(double a, double b, double c);
	void setRadius(double r);
	void setHeight(double h);
	double getRadius();
	double getHeight();

	//������� ������ �����������
	double area();
	//�����
	double volume();
	void print();

	friend ostream& operator<<(ostream& stream, Cone &obj);
};



