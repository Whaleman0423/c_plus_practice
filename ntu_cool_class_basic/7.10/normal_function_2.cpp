#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
        int x;
        int y;
};

Point Add(Point lhs, Point rhs){
    return {lhs.x + rhs.x, lhs.y + rhs.y}; // C++11
}

int main(){
    Point p = {3, 5};
    Point q = {6, 4};
    
    Point r = Add(Add(p, q), p); // 裡面的 Add 會先被執行
    cout << "r: (" << r.x << ", " << r.y << ")" << endl;

    return 0;
}