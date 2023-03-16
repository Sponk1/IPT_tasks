#include <iostream>
#include <cmath>
#include "cone.h"

const double pi = 3.14159265;
using namespace std;

Cone::Cone()
{
	x = y = z = radius = height = 0;
}

Cone::Cone(double r, double h)
{
	x = y = z = 0.0;
	radius = r;
	height = h;
}

Cone::Cone(double a, double b, double c, double r, double h)
{
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}

void Cone::set(double a, double b, double c, double r, double h)
{
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}

void Cone::setCoordiante(double a, double b, double c)
{
	x = a; y = b; z = c;
}

void Cone::setRadius(double r)
{
	radius = r;
}

void Cone::setHeight(double h)
{
	height = h;
}

double Cone::getRadius()
{
	return radius;
}

double Cone::getHeight()
{
	return height;
}

double Cone::area()
{
	double i = sqrt(height * height + radius * radius);
	return pi * radius * (radius + i);
}

double Cone::volume()
{
	return pi * radius * radius * height / 3;
}

void Cone::print()
{
	cout << "Координаты: " << x << ',' << y << ',' << z << endl;
	cout << "Высота - " << height << endl;
	cout << "Радиус - " << radius << endl;
}

ostream& operator<<(ostream& stream, Cone& obj)
{
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") " << "r = " << obj.radius << " h = " << obj.height << "\n";
	return stream;
}
