#include <iostream>
using namespace std;

int main()
{
    // auto a = 3;
    // auto b(3);
    // auto c{3};
    auto a = 3.2;
    auto b(3.2);
    auto c{3.2};

    // 使用 auto 時，必須要初始化
    // auto d; // 編譯錯誤

    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;
    return 0;
}