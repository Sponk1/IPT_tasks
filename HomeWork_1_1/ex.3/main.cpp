#include <iostream>
#include "figure.h"

using namespace std;

int main()
{
	figure fig;

	float x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> x2 >> x3 >>  x4 >>  y1 >> y2 >>  y3 >> y4;

	fig.set_figure(x1, x2, x3, x4, y1, y2, y3, y4);

	cout << fig.get_ab() << endl;
	cout << fig.get_p() << endl;

	fig.show();
}