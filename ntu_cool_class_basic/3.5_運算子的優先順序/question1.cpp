#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    a = b = c = 1;

    // cout << "a: " << a << endl             // 1
    //      << "b: " << b << endl             // 1
    //      << "c: " << c << endl;            // 1

    // cout << true << endl;                  // 1

    // cout << b == c << endl;                // 編譯錯誤，因 << 的優先順序優於 ==
    // cout << (b == c) << endl;              // 1

    // cout << a == b == c << endl;           // 編譯錯誤，因 << 的優先順序優於 ==
    // cout << (a == b == c) << endl;         // 1, 因隱性轉型 true -> 1
    // cout << (a == b && b == c) << endl;    // 應改成此行
    return 0;
}