#include <iostream>
using namespace std;

int main() {
    int v[5] = {1, 2, 3, 4, 5}; // 陣列用 {} 初始化
    for (int n : v){ // C 風格陣列可使用範圍型的迴圈語法
        cout << n << " ";
    }
    return 0;
}