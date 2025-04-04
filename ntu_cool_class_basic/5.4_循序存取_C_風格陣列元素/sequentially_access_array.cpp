#include <iostream>

using namespace std;

int main(){
    int b[3]{1, 2, 3};

    // case1
    // for (int i = 0; i < 3; i++){
    //     cout << b[i] << endl;
    // }

    // // case2: C++ 的寫法
    // for (int v : b){
    //     cout << v << endl;
    // }

    // // case3: 使用 auto 自動推斷型態
    // for (auto v : b){
    //     cout << v << endl;
    // }

    // case1 和 case2 如果在回圈內去改值，不會影響到陣列的值
    // 因為是複製陣列的值給 v，所以 v 的值改變不會影響到 b 陣列

    // case4: 使用參考則會共用原有物件，因此會影響到陣列中的值
    for (auto &v : b){
        v = 0;
        cout << v << endl;
    }
    for (auto v : b){
        cout << v << endl;
    }

    return 0;
}