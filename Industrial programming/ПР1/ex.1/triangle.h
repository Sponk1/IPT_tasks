#pragma once

class triangl
{
private:
	double a, b, c;
	bool exst_tr;

public:
	//длины сторон
	void set(double a1, double b1, double c1);
	double get_a();
	double get_b();
	double get_c();

	//существование треугольника
	bool get_exst_tr();
	
	//вывод параметров треугольника
	void show();
	
	//периметр
	double perimetr();

	//площадь
	double square();

};


