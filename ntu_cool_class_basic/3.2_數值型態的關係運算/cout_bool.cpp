#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    bool b = false;

    cout << "a: " << a << endl  // 1
         << "b: " << b << endl; // 0

    // cout << 3 > 2 > 1 << endl;     // 編譯錯誤， << 的優先順序優於 >
    cout << (3 > 2 > 1) << endl;      // 0
    cout << (3 > 2 && 2 > 1) << endl; // 1

    return 0;
}