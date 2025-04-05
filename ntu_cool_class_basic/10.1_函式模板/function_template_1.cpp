#include <iostream>
using namespace std;

// 寫一個可以設定變數為不同數值的 Assign 函式
void Assign(int&, int);

int main() {
    int a = 0, b = 0;

    Assign(a, 3);
    Assign(b, 5);

    cout << "a: " << a << endl
         << "b: " << b << endl;

    return 0;
}

void Assign(int& o, int v) {
    o = v;
}
