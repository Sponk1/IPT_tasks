#pragma once

class circle
{
private:
	//���������� 1
	float radius;
	float x_center;
	float y_center;
	//�����������
	float a;
	float b;
	float c;
	//���������� 2
	float rad;
	float x_cntr;
	float y_cntr;


public:
	///circle

	void set_circle(float r, float x, float y);
	void set_radius(float r);
	float get_radius();
	void set_x(float x);
	void set_y(float y);
	float get_x();
	float get_y();

	//square
	float square();


	///triangle
	void set_triangle(float a1, float b1, float c1);
	//existance
	bool exst_tr();
	//��������� ����������
	bool around_triangle(float r ,float a, float b, float c);
	//��������� ����������
	bool in_triangle(float r, float a, float b, float c);

	//���������� 2
	void set_circle2(float r1, float x1, float y1);

	//�����������
	bool intersection(float r, float x, float y, float r1, float x1, float y1);

	//������� �������� ������������
	void show_triangle();

	//������� �������� �����
	void show_circle();

	//���������� + ������
	void set_cr_tr(float r, float a, float b, float c);

};