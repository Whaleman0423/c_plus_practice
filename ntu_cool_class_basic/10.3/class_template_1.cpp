#include <iostream>
using namespace std;

class Point{ // Point 用來表示二為整數座標並支援串流輸出
    public:
        int x;
        int y;
};

ostream& operator<<(ostream&, const Point&);


int main() {
    Point p = {3, 5};
    cout << "p: " << p << endl;
    return 0;
}

ostream& operator<<(ostream& os, const Point& p){
    return os << "(" << p.x << ", " << p.y << ")";
}