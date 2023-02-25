#include <cmath>
#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	circle mas_circle[3];
	circle mas_triangle[3];
	circle mas_radius[3];
	circle mas_x[3];
	circle mas_y[3];
	circle tr_ar;
	circle tr_in;

	float r, x, y;			// круг1
	float rad, x_c, y_c;	//круг 2
	float a, b, c;			// треугольник

	//круг 1
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter radius, X and Y coordinates for circle №" << i + 1 << " space-separated: " << endl;
		cin >> r >> x >> y;
		mas_circle[i].set_circle(r, x, y);
		mas_radius[i].set_radius(r);
		mas_x[i].set_x(x);
		mas_y[i].set_y(y);
	}
	cout <<"---------------------------------------------------------------------------------" <<  endl;
	//треугольник
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter sides a, b and c for triangle №" << i + 1 << " space-separated: " << endl;
		cin >> a >> b >> c;
		mas_triangle[i].set_triangle(a, b, c);
		if (!(mas_triangle[i].exst_tr()))
		{
			mas_triangle[i].show_triangle();
			cout << "Triangle with such sides doen't exist, try again." << endl;
			i--;
		}
		
		//around triangle
		if (tr_ar.around_triangle(mas_radius[i].get_radius(), a, b, c) == 1)
		{
			cout << "This circle surrounds the triangle" << endl;
		}
		else
		{
			cout << "This cicle doesn't surround the triangle" << endl;
		}
		
		if (tr_in.in_triangle(mas_radius[i].get_radius(), a, b, c) == 1)
		{
			cout << "This circle is in the triangle" << endl;
		}
		else
		{
			cout << "This circle isn't in the triangle" << endl;
		}



	}
	cout << "---------------------------------------------------------------------------------" << endl;
	//square
	for (int i = 0; i < 3; i++)
	{
		cout << "Square of circle №" << i + 1 << " is " << mas_circle[i].square() << " centimeters square" << endl;
	}
	cout << "---------------------------------------------------------------------------------" << endl;

	cout << "Enter radius, X and Y coordinates for another cirle: " << endl;
	cin >> rad >> x_c >> y_c;
	for (int i = 0; i < 3; i++)
	{
		if (tr_ar.intersection(mas_radius[i].get_radius(), mas_x[i].get_x(), mas_y[i].get_y(), rad, x_c, y_c) == 1)
		{
			cout << "Another cicle itersects circle №" << i + 1 << endl;
		}
		else
		{
			cout << "Another doesn't cicle itersect circle №" << i + 1 << endl;
		}
	}
}