#include <cmath>
#include <iostream>
#include "rational.h"

using namespace std;

int main()
{   
    int a, b;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;
    rational T(a, b);
    T.set(a, b);
    T.show();
    
    cout << "amout of fractions: ";
    int n;
    cin >> n;

    //массивы и их заполнение
    int* arrayA{ new int[n] };
    int* arrayB{ new int[n] };
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data for " << i + 1 << " a" << endl;
        int a; cin >> a;
        arrayA[i] = a;
       
    }
    for (int j = 0; j < n; j++)
    {
        cout << "Enter data for " << j + 1 << " b" << endl;
        int b; cin >> b;
        arrayB[j] = b;
    }

    //реализация 
    for (int i = 0; i < n; i++)
    {   
        cout << "The frction N" << i + 1 << " : ";
        T.set(arrayA[i], arrayB[i]);
        T.show();
        cout << endl;
    }
    

}

