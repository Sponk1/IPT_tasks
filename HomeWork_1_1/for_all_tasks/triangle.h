#pragma once

class triangl
{
private:
	double a, b, c;
	bool exst_tr;

public:
	//����� ������
	void set(double a1, double b1, double c1);
	double get_a();
	double get_b();
	double get_c();

	//������������� ������������
	bool get_exst_tr();
	
	//����� ���������� ������������
	void show();
	
	//��������
	double perimetr();

	//�������
	double square();

};


