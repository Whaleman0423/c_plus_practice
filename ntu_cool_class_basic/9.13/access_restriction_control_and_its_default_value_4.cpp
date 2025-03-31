#include <iostream>
using namespace std;

struct Point{ // 結構（struct）的成員存取限制預設為公開（public）
    // struct 與 class 的差別在於，struct 的成員存取限制預設為公開（public），而 class 的成員存取限制預設為私有（private）
    // struct 等同於 class 並設置 public 存取限制
    int x;
    int y;
};

/* 結構（struct）是從 C 延襲的語法，在 C++ 就是存取限制預設為公開（public）的類別（class） */

int main() {
    Point p;
    p.x = 3;
    p.y = 5;
    cout << "p: (" << p.x << ", " << p.y << ")" << endl;

    return 0;
}