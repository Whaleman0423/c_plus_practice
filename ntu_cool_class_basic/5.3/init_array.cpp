#include <iostream>

using namespace std;

/*
    C 風格陣列的初始化
*/

int main(){
    int a[3] = {1, 2, 3};
    // int a[3] = {1, 2}; // 正確，未初始化的元素會自動填 0
    // int a[3]{1,2,3}; // 正確，等好久可以省略，使用大括號初始化
    // int a[3] = {1, 2, 3, 4}; // 錯誤, 陣列大小與初始化值數量不符

    for (int i = 0; i < 3; i++){
        cout << a[i] << endl;
    }

    return 0;
}