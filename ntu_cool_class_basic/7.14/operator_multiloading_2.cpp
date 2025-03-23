#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;
        Point operator+(Point rhs){
            return Point{x + rhs.x, y + rhs.y};
        }
};


int main(){
    Point p1 = {3, 5};
    Point p2 = {6, 4};
    // Point p3 = p1.operator+(p2);
    Point p3 = p1 + p2;
    cout << "p3: (" << p3.x << ", " << p3.y << ")" << endl;
    return 0;
}