#include <iostream>
#include <initializer_list>

using namespace std;

int main() {
    initializer_list<int> l = {1, 2, 3, 4, 5}; // 初始化列表元素值是唯讀的，不能修改

    // 因為是唯讀的，所以 p 的型態是 const int*
    for (const int* p = l.begin(); p != l.end(); p++){ // begin 和 end 也有成員函式的版本
    // for (const int* p = begin(l); p != end(l); p++){ // 一般函式的版本
        cout << *p << " ";
    }

    return 0;
}
