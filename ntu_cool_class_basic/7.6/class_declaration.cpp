#include <iostream>
#include <cmath>

using namespace std;

class Point;
double length(Point);

// 需要在使用 Point 去產生實體之前（第 17 行與第 22 行），先完成定義
class Point{
    public:
        int x;
        int y;
};

int main(){
    Point p = {3, 5};
    cout << "Length: " << length(p) << endl;
    return 0;
}

double length(Point p){
    return sqrt(p.x * p.x + p.y * p.y);
}