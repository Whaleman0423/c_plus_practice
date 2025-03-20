#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
        int x;
        int y;

    double length(){
        return sqrt(x * x + y * y);
    }
};

int main(){
    Point p = {3, 5};
    cout << "Length: " << p.length() << endl;
    return 0;    
}