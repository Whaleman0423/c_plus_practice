#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;

        Point Add(Point rhs) const{
            return {x + rhs.x, y + rhs.y};
        };

        // void Reset() const { // 添加了 const 後，這個函數不能修改成員變數；編譯器會檢查，如果修改成員變數，會產生編譯錯誤
        void Reset(){
            x = y = 0;
        }

};

int main(){
    // const Point p = {3, 5}; // 編譯錯誤，如果使用 const 宣告，則不能呼叫非唯讀的成員方法 Reset
    // p.Reset();

    Point p = {3, 5};
    p.Reset();

    cout << "p: (" << p.x << ", " << p.y << ")" << endl;

    return 0;
}
