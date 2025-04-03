#include <iostream>
using namespace std;

/* 編譯錯誤範例 */

template<class T>
class Point{ // 將 Point 設計成類別模板，用模板參數 T 決定座標的資料型態
    public:
        T x;
        T y;
};

ostream& operator<<(ostream&, const Point&);

int main() {
    Point<int> p = {3, 5}; // 編譯時會自動生成 Point<int> 的版本
    Point<double> q = {3.2, 5.4}; // 編譯時會自動生成 Point<double> 的版本
    cout << "p: " << p << endl
         << "q: " << q << endl;
    return 0;
}

ostream& operator<<(ostream& os, const Point& p){
    return os << "(" << p.x << ", " << p.y << ")";
}