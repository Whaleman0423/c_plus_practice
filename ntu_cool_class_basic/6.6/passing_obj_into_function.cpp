#include <iostream>

using namespace std;

// case1: 使用 int 作為參數
void MySwap(int, int);

// case2: 使用參考作為參數
void MySwap2(int&, int&);

int main(){
    int a = 3, b = 5;

    // case1: 使用 int 作為參數
    // MySwap(a, b); // 值傳遞到function，只會改變 MySwap 的 a 和 b，不會改變原本的值

    // case2: 使用參考作為參數
    MySwap2(a, b); // 參考傳遞到function，會改變原本的值

    cout << "a = " << a << endl
         << "b = " << b << endl;

    return 0;
}

// case1: 使用 int 作為參數
void MySwap(int a, int b){
    int t = a;
    a = b;
    b = t;
    cout << "In function, a = " << a << endl
         << "In function, b = " << b << endl;
}

// case2: 使用參考作為參數
void MySwap2(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}