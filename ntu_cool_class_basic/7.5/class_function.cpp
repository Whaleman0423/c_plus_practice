#include <iostream>
#include <cmath>
using namespace std;

class Point{
    public:
        int x;
        int y;
};

double Length(Point p);

int main() {
    Point p = {3, 5};
    cout << "Length: " << Length(p) << endl;
    
    return 0;
}

double Length(Point p){
    return sqrt(p.x * p.x + p.y * p.y);
}