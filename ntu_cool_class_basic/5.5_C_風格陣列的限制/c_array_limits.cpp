#include <iostream>

using namespace std;

/*
    C 風格陣列型態物件，不能經由複製現有物件來初始化
    也不能進行賦值運算
 */

int main(){
    int a[3] = {1, 2, 3};
    // int b[3] = a; // 編譯錯誤

    // for (int i = 0; i < 3; i++){
    //     cout << b[i] << endl;
    // }

    return 0;
}