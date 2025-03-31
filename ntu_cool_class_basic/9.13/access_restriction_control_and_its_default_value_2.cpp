#include <iostream>
using namespace std;

/* 編譯錯誤範例 */

class Point{ // 不加任何存取限制，預設為私有 private
    int x;
    int y;
};

int main() {
    Point p;
    p.x = 3;
    p.y = 5;
    cout << "p: (" << p.x << ", " << p.y << ")" << endl;

    return 0;
}