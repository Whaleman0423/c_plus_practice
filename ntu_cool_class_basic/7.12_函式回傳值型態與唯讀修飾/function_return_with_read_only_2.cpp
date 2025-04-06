#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;
        
        // Point Add(const Point rhs) const{
        const Point Add(const Point rhs) const{ // 可使用 const 修飾回傳的值，避免修改回傳的值
            return {x + rhs.x, y + rhs.y};
        }

        void Reset(){
            x = y = 0;
        }
};
int main(){
    const Point p = {3, 5}, q {6, 4};

    p.Add(q);
    // p.Add(q).Reset(); // 編譯錯誤，因為 Add 回傳的是唯讀的常數，不能呼叫 Reset

    return 0;
}