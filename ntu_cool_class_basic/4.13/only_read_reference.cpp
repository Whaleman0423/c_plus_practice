#include <iostream>
using namespace std;

int main()
{
    // case1
    // int &a = 3; // 錯誤，非常數參考的初始值必須是左值
    // int &b = a + 1; // 錯誤，非常數參考的初始值必須是左值

    // // case2 唯讀的參考：可參考左值與右值
    // const int &a = 3;
    // const int &b = a + 1;
    // cout << "a: " << a << endl
    //      << "b: " << b << endl;

    // case3 唯讀的參考可以參考暫時物件（隱性轉型的物件）
    int a = 3;
    const double &b = a;
    const long long &c = a;
    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;

    return 0;
}