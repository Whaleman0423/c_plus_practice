#include <iostream>
using namespace std;

int main() {
    for (auto n : {1, 2, 3, 4, 5}){ // {} 是初始化列表 (initializer list), 初始化列表的資料型態是什麼？
        cout << n << " ";
    }
    return 0;
}
