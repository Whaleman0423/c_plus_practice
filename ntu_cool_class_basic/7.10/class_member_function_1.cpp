#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
        int x;
        int y;
        
    Point Add(Point rhs){
        return {x + rhs.x, y + rhs.y};
    }
};

int main(){
    Point p = {3, 5};
    Point q = {6, 4};
    Point r = p.Add(q);
    cout << "r: (" << r.x << ", " << r.y << ")" << endl;
    return 0;
}