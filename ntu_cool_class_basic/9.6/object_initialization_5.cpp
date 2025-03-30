#include <iostream>

using namespace std;

class Point{
    public:
        int x, y;
};

int main(){
    // 列表初始化（direct-list initialization）
    Point p{3, 4};
    // 複製列表初始化
    Point p = {3, 4};
}