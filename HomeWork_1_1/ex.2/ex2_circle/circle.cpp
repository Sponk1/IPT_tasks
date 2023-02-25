#include "circle.h"
#include <cmath>
#include <iostream>

using namespace std;

void circle::set_circle(float r, float x, float y)
{
	radius = r; x_center = x; y_center = y;
}

void circle::set_radius(float r)
{
	radius = r;
}

float circle::get_radius()
{
	return radius;
}

void circle::set_x(float x)
{
	x = x_center;
}

void circle::set_y(float y)
{
	y = y_center;
}

float circle::get_x()
{
	return x_center;
}

float circle::get_y()
{
	return y_center;
}

float circle::square()
{
	float s;
	s = radius * radius * 3.14;
	return s;
}

//triangle
void circle::set_triangle(float a1, float b1, float c1)
{
	a = a1; b = b1, c = c1;
}

bool circle::exst_tr()
{
	return ((a + b > c) && (a + c > b) && (b + c > a));
}

bool circle::around_triangle(float r, float a, float b, float c)
{
	float R; float S; float P;
	P = (a + b + c)/2;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	
	R = (a * b * c) / (4 * S);

	//cout << "s = " << S << " R = " << R << " r = " << r << endl;
	return r == R;
}

bool circle::in_triangle(float r, float a, float b, float c)
{
	float R; float S; float P;
	P = (a + b + c) / 2;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	R = (2 * S) / (a + b + c);

	return r == R;
}

void circle::set_circle2(float r1, float x1, float y1)
{
	rad = r1; x_cntr = x1; y_cntr = y1;
}

//пересечение окружностей
bool circle::intersection(float r, float x, float y, float r1, float x1, float y1)
{
	float d;
	d = sqrt(abs((x - x1) + (y - y1)));
	
	if (r > r1)
	{
		return r >= d && d + r1 > r;
	}
	else if (r1 > r)
	{
		return r1 >= d && d + r > r1;
	}
	else
	{
		return 0;
	}
}
//вывести треугольник
void circle::show_triangle()
{
	cout << "1st side " << a << endl;
	cout << "2nd side " << b << endl;
	cout << "3d side " << c << endl;

}
//вывести круг
void circle::show_circle()
{
	cout << "Radius" << radius << endl;
	cout << "Сoordinate X" << x_center << endl;
	cout << "Coordinate Y" << y_center << endl;
}

void circle::set_cr_tr(float r, float a1, float b1, float c1)
{
	radius = r; a = a1; b = b1, c = c1;
}






