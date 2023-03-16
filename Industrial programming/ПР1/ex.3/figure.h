#pragma once

class figure
{
private:
	// x1,y1 = A | x2,y2 = B etc.
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float s;
	float p;

public:
	void set_figure(float xx1, float xx2, float xx3, float  xx4, float  yy1, float  yy2, float  yy3, float  yy4);
	float get_ab();
	float get_ad();
	float get_bc();
	float get_cd();
	float get_p();
	//float get_s();

	void show();

	bool is_square();

};

