#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    double b = 3.2;
    char c = '3';
    bool d = true;

    cout << "sizeof(a): " << sizeof(a) << endl  // 4 bytes
         << "sizeof(b): " << sizeof(b) << endl  // 8 bytes
         << "sizeof(c): " << sizeof(c) << endl  // 1 bytes
         << "sizeof(d): " << sizeof(d) << endl; // 1 bytes
    return 0;
}