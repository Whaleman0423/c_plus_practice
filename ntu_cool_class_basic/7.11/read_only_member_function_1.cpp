#include <iostream>

using namespace std;

class Point{
    public:
        int x;
        int y;

        // Point Add(Point rhs) { // 會造成編譯錯誤，因為這個函數可能會修改成員變數，即便沒有修改，也會有罪推定可能會修改成員變數
        Point Add(Point rhs) const{ // 添加 const 後，這個函數不能修改成員變數；編譯器會檢查
            return {x + rhs.x, y + rhs.y};
        }
};

int main(){
    const Point p = {3, 5}; // p 物件有加 const，所以不能修改成員變數
    Point q = {6, 4};
    Point r = p.Add(q);
    cout << "r: (" << r.x << ", " << r.y << ")" << endl;
    
    return 0;
}