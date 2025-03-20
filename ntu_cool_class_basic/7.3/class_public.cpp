#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;
};

int main() {
    Point p = {3, 5};
    Point q{6, 4};
    
    cout << "p: (" << p.x << "," << p.y << ")" << endl
         << "q: (" << q.x << "," << q.y << ")" << endl;
    
    return 0;
}