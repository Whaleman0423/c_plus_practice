#include <iostream>
using namespace std;

template<class T>
class Point{
    public:
        T x;
        T y;
};

// 所有使用到 T 的地方，也都要模板化
template<class T>
ostream& operator<<(ostream&, const Point<T>&);

int main() {
    Point<int> p = {3, 5};
    Point<double> q = {3.2, 5.4};
    cout << "p: " << p << endl
         << "q: " << q << endl;
    return 0;
}

// 當函式的參數貨回傳值是類別模板時，通常自己也要是函式模板才好
template<class T>
ostream& operator<<(ostream& os, const Point<T>& p){
    return os << "(" << p.x << ", " << p.y << ")";
}