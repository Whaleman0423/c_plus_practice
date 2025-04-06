#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;

        Point Add(Point rhs) const{
            return {x + rhs.x, y + rhs.y};
        };

};

int main(){
    Point p = {3, 5}; // 不唯讀的實體物件也可以呼叫唯讀的成員方法
    Point q = {6, 4};
    Point r = p.Add(q);
    cout << "r: (" << r.x << ", " << r.y << ")" << endl;
    return 0;
}
