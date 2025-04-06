#include <iostream>
using namespace std;

class Point{
    public: // public（公開）表示所有函式都可以存取以下所列成員
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