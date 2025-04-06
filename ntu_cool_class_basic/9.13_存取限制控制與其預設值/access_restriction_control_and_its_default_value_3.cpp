#include <iostream>
using namespace std;

/* 編譯錯誤範例 */

class Point{
    private: // private（私有）表示除了該類別的成員函式以外，其他地方不可以存取所列成員
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