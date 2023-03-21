#include <iostream>
#include <cmath>
#include "cone.h"

const double pi = 3.14159265;
using namespace std;

//обычный конус
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

double Cone::area() const
{
	return pi * radius* (radius + sqrt(height * height + radius * radius));
}

double Cone::volume() const
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




//усеченный конус

truncatedCone::truncatedCone()
{
	r = 0;
	h = 0;
	smallRadius = 0;
}

truncatedCone::truncatedCone(double r1, double h1, double sr)
{
	smallRadius = sr;
	r = r1;
	h = h1;
}

void truncatedCone::setSmallRadius(double sr)
{
	smallRadius = sr;
}

void truncatedCone::setRadius(double r1)
{
	r = r1;
}

void truncatedCone::setHeight(double h1)
{
	h = h1;
}

void truncatedCone::setVolume(double vol1)
{
	vol = vol1;
}

double truncatedCone::getVolume()
{
	return vol;
}

//площадь полной поверхности усеченного конуса
double truncatedCone::area() const
{
	
	double big = pi * r * r;
	double small = pi * smallRadius * smallRadius;
	double side = sqrt((r - smallRadius) * (r - smallRadius) + h * h);
	return big + small + pi * (r + smallRadius) * side;
}

double truncatedCone::volume() const
{
	return (pi * h * (r * r + r * smallRadius + smallRadius * smallRadius))/3;
}
void truncatedCone::comparison(truncatedCone cone1, truncatedCone cone2)
{
	if (cone1.area() > cone2.area())
	{
		cout << "Truncated cone1s' square > Truncated cone2s' square";
	}
	else 
	{
		cout << "Truncated cone1s' square < Truncated cone2s' square";
	}

}
ostream& operator<<(ostream& stream, truncatedCone& obj)
{
	stream << "R  = " << obj.r << ';' << " r = " << obj.smallRadius << ';' << " height = " << obj.h << "\n";
	return stream;
}

istream& operator>>(istream& is, truncatedCone& obj)
{
	cout << "Enter the bottom radius of the truncated cone: ";
	is >> obj.r;
	cout << "Enter the small radius of the truncated cone: ";
	is >> obj.smallRadius;
	cout << "Enter the height of the truncated cone: ";
	is >> obj.h;
	return is;
}