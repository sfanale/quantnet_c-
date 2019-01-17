#include <iostream>
#include <float.h>
#include <limits.h>
using namespace std;

int main() {


    // make some variables
    int i = 42;
    long index = 0L;

    double d1 = 2564.46874;
    double d2 = 3.1415*d1;

    cout << "Values : " << i << ", " << index << ", " << d2 << ", " << d2*i<< endl;

    cout << "int characteristics: " << sizeof(int) << ", " << INT_MIN << ", " << INT_MAX << endl;
    cout << "long chars: " << sizeof(long) << endl;

    // what happens here?
    float f = FLT_MAX + 1;
    cout << f;

    return 0;
}