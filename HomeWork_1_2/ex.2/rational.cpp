#include <iostream>
#include <cmath>
#include "rational.h"

using namespace std;

#include "rational.h"
#include <iostream>
#include <cmath>

using namespace std;

rational::rational(int a1, int b1)
{
    a = a1; b = b1;
    flag = true;

}

void rational::set(int a1, int b1)
{
    a = a1; b = b1; flag = true;

    if (b == 0 or a == 0)
    {
        flag = false;
        cout << "incorrect a or b" << endl;
    }

    if (a > b)
    {
        a = a / b;
    }

    if (b % a == 0)
    {
        b = b / a;
        a = a / a;
    }

    for (int i = (b / 2); i > 2;i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            a = a / i; b = b / i;
            break;
        }
    }
}

void rational::show()
{
    if (flag == false)
    {
        cout << "incorrect a or b" << endl;
    }
    cout << "result: ";
    if (flag == true && b == 1) {
        cout << a << endl;
    }
    else
    {
        cout << a << "/" << b << endl;
    }
}




