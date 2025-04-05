#include <iostream>
using namespace std;

class Point{
    public:
        double x; // 也可以改成支援 double 座標
        double y;
};

ostream& operator<<(ostream&, const Point&);


int main() {
    Point p = {3.2, 5.4}; // 我們有時需要 int 座標; 有時需要 double 座標
    cout << "p: " << p << endl; // 甚至有更多其他的可能，例如 short, float 等等
    return 0;
}

ostream& operator<<(ostream& os, const Point& p){
    return os << "(" << p.x << ", " << p.y << ")";
}