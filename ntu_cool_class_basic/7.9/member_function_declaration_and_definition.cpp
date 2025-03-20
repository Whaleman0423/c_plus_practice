#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
        int x;
        int y;

        // 也可以只在class宣告，在class外定義
        double length();
};

double Point::length(){
    return sqrt(x * x + y * y);
}

int main(){
    Point p = {3, 5};
    cout << "Length: " << p.length() << endl;
    return 0;
}