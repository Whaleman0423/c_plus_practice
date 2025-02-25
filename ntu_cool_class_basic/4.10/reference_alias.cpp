#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int &b = a;
    int &c = b;

    c = 5;

    cout << "a: " << a << endl  // 5
         << "b: " << b << endl  // 5
         << "c: " << c << endl; // 5

    return 0;
}