#include <iostream>
using namespace std;


int main() {
    double d1 = 3.1415; double d2 = -2.0; double d3 = 2.71;
    double d4;

    // cout << d4 << endl; will give a runtime error

    d4 = d1 + d2/d3; cout << d4 << endl;
    d4 = (d1 + d2)/d3; cout << d4 << endl;

    // combined assignment operators
    d4 += d1; // d4 = d4 + d1
    d3 *= d2;

    // prefix postfix
    int i = 3;
    int j = ++i; cout << j << ", " << i << endl; // 4,4

    i = 3;
    int k = i++; cout << i << ", " << k << endl; // 4,3

    // comma operator
    int y =5;
    int c;

    c = y += 4, y + 5;

    cout << "Value of c: " << c << endl; // 9

    y = 5;
    int c2 = (y += 4, y + 5);
    cout << "Value of c2: " << c2 << endl; // 14

    // replacing , with ;
    y = 5;
    int d = y += 4; y + 5;

    cout << "Value of d: " << d << endl; // 9

}