#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
        int x;
        int y;
        double Length();
};

// 一般函式
double Length(Point p){
    return sqrt(p.x * p.x + p.y * p.y); 
}

// 成員函式
double Point::Length(){
    // return sqrt(x * x + y * y); 可以運行，下一行等同於此行，可以省略 (*this); this 是隱藏的指標，指向呼叫此函式的物件
    // return sqrt((*this).x * (*this).x + (*this).y * (*this).y); // this 代表的是 p 的位址，即 &p 
    return sqrt(this->x * this->x + this->y * this->y); // 此行等於上一行； this-> 就是 (*this).
    
}

int main(){
    Point p = {3, 5};
    cout << "Length(p): " << Length(p) << endl
         << "p.Length(): " << p.Length() << endl;
    
    return 0;
}