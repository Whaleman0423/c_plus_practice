#include <iostream>

using namespace std;

int main()
{
    // const int a; // 錯誤，常量必須在定義時初始化
    const int a = 3;

    // a = 5; // 錯誤，常量不能被修改

    cout << "a: " << a << endl;

    return 0;
}