#include <iostream>
using namespace std;

int main()
{
    int a = 3.2;   // c 風格
    int b(3.2);    // c++ 風格
    int c{3.2};    // c++ 11 風格 {}編譯錯誤
    int d = {3.2}; // c++ 11 風格 {}編譯錯誤

    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl
         << "d: " << d << endl;
    return 0;
}