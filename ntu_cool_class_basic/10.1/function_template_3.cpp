#include <iostream>
using namespace std;

// 設定函式模板
template <int V> // 模板可以有零到多個模板
void Assign(int&); // 用模板自動生成不同的 Assign<V> 函式

int main() {
    int a = 0, b = 0;

    Assign<3>(a); // 模板引數是函式名稱的一部份
    Assign<5>(b); // Assign 是函式模板，是用來生成函式的範本，而不是真正的函式
    // Assign<3> 與 Assign<5> 才是函式名稱

    cout << "a: " << a << endl
         << "b: " << b << endl;

    return 0;
}

template <int V>
void Assign(int& o) {
    o = V;
}