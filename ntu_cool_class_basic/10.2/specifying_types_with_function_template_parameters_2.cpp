#include <iostream>
using namespace std;

template <typename T> // 使用 typename 表示參數 T 是個型態
// template <class T> // 早期的時候可以用 class，現在仍然可以沿用
void MySwap(T&, T&);

int main() {
    int a = 3, b = 5;
    double c = 4.3, d = 3.2;

    cout << "(a, b): (" << a << ", " << b << ")" << endl
         << "(c, d): (" << c << ", " << d << ")" << endl;

    MySwap<int>(a, b);
    MySwap<double>(c, d);

    // 不加引數的話，編譯器會嘗試自動推斷型態
    // MySwap(a, b);
    // MySwap(c, d);

    cout << "(a, b): (" << a << ", " << b << ")" << endl
         << "(c, d): (" << c << ", " << d << ")" << endl;

    return 0;
}

template <typename T>
void MySwap(T& a, T& b) {
    T t = a;
    a = b;
    b = t;  
}