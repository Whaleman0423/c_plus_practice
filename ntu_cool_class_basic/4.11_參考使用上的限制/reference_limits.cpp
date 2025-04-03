#include <iostream>
using namespace std;

int main()
{
    // case1
    // int &b; // 錯誤，參考變數需要初始設定式

    // // case2
    // int a = 3;
    // int &b = a;
    // // int &&c = b; // 錯誤，沒有參考的參考
    // int &c = b;
    // cout << "a: " << a << endl
    //      << "b: " << b << endl
    //      << "c: " << c << endl;

    // case3
    int a = 3;
    int b = 4;
    int c = 5;
    // int &v[3] = {a, b, c}; // 錯誤，參考不能作為陣列元素型態
    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;

    return 0;
}