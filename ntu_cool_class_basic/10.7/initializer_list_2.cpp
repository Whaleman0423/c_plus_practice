#include <iostream>
#include <initializer_list>

using namespace std;

int main() {
    // 初始化列表類似於陣列，但可以不用指定大小，也可以不用指定型態，就是像陣列模板一樣
    initializer_list<int> l = {1, 2, 3, 4, 5};
    for (auto n : l){
        cout << n << " ";
    }
    return 0;
}
