#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;
};


int main() {
    Point p;
    p.x = 3;
    p.y = 5;
    
    cout << "p：（" << p.x << "," << p.y << ")" << endl;

    return 0;
}