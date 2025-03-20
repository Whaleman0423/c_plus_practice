#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;

        // Point Add(Point rhs); // 如果實例物件是唯讀，將產生編譯錯誤
        Point Add(Point rhs) const;
};

int main(){
    const Point p = {3, 5};
    Point q = {6, 4};
    Point r = p.Add(q);
    cout << "r: (" << r.x << ", " << r.y << ")" << endl;
    return 0;
}

// Point Point::Add(Point rhs) {
Point Point::Add(Point rhs) const{ // 需對應類別成員方法的 const 屬性
    return {x + rhs.x, y + rhs.y};
}

/* 
當生成唯讀實例物件時，編譯器會檢查成員方法是否為唯讀，如果不是，則會產生編譯錯誤 
也就是說，唯讀實例物件 只能呼叫 唯讀成員方法
*/