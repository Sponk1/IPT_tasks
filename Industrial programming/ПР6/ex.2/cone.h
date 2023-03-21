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
	virtual double area() const;
	//�����
	virtual double volume() const;
	void print();

	friend ostream& operator<<(ostream& stream, Cone &obj);
	friend istream& operator>>(istream& is, Cone& obj);
};

class truncatedCone : public Cone 
{
private:
	double smallRadius;
	double r;
	double h;
	double vol;
public:
	truncatedCone();
	truncatedCone(double r1, double h1, double sr);

	void setSmallRadius(double sr);
	void setRadius(double r1);
	void setHeight(double h1);
	void setVolume(double vol1);
	double getVolume();

	//��������������� ������ ���������� �������
	double area() const;
	//��������������� ������ ���������� ������
	double volume() const;
	//��������� �������
	void comparison(truncatedCone cone1, truncatedCone cone2);
	//����������
	friend ostream& operator<<(ostream& stream, truncatedCone& obj);
	friend istream& operator>>(istream& is, truncatedCone& obj);
};



