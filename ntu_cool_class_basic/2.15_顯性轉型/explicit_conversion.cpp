#include <iostream>
using namespace std;

int main()
{
    int a = 3.2;
    int b = (int)3.2;              // c 風格
    int c = static_cast<int>(3.2); // c++ 風格

    cout << "a: " << a << endl  // a: 3
         << "b: " << b << endl  // b: 3
         << "c: " << c << endl; // c: 3

    return 0;
}