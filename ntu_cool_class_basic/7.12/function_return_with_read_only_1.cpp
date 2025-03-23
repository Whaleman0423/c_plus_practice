#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;
        
        // Point Add(Point rhs) const{
        Point Add(const Point rhs) const{ // 可使用 const 修飾傳入的參數，避免修改參數的值
            return {x + rhs.x, y + rhs.y};
        }

        void Reset(){
            x = y = 0;
        }
};
int main(){
    const Point p = {3, 5}, q {6, 4};

    p.Add(q).Reset();

    return 0;
}