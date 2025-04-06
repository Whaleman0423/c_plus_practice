#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
        // 可以不用提前宣告或定義成員變數
        double length(){
                return sqrt(x * x + y * y);
            }
        int x;
        int y;
};

int main(){
    Point p = {3, 5};
    cout << "Length: " << p.length() << endl;
    return 0;
}