#include <iostream>
using namespace std;

int main()
{
    // case1
    // int &a = 3; // 錯誤，參考不能綁定到右值

    // // case2
    // int a = 3;
    // // int &b = a + 1; // 錯誤，暫時物件是右值，不能被參考綁定

    // // case3 一般型態可以隱性轉型
    // int a = 3;
    // double b = a;
    // long long c = a;

    // case4
    int a = 3;
    // double &b = a; // 錯誤，參考不能綁定到不同的物件，並不會隱性轉型；只能參考左值，不能參考右值
    // long long &c = a; // 錯誤，參考不能綁定到不同的物件，並不會隱性轉型；只能參考左值，不能參考右值

    return 0;
}