#include "triangle.h"
#include <iostream>
#include <cmath>


using namespace std;

void triangl::set(double a1, double b1, double c1)
{
	a = a1; b = b1; c = c1;
}
//������� ������������
double triangl::get_a()
{
	return a;
}

double triangl::get_b()
{
	return b;
}

double triangl::get_c()
{
	return c;
}

//������������� ������������
bool triangl::get_exst_tr()
{
	bool exst_tr = ((a + b > c) && (a + c > b) && (c + b > a));
	return exst_tr;
}

//������� ��������� ������������
void triangl::show()
{
	
	std::cout << "1 �������: " << a << endl;
	std::cout << "2 �������: " << b << endl;
	std::cout << "3 �������: " << c << endl;
}

//��������
double triangl::perimetr()
{
	double p = a + b + c;
	return p;
}

//�������
double triangl::square()
{
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));

	return S;
}

