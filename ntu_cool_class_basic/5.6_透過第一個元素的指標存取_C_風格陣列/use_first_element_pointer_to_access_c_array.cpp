#include <iostream>

using namespace std;

/*
    用指向陣列第一個元素的指標存取陣列元素
 */

int main(){
    int a[3] = {1, 2, 3};
    int *b = a; // 陣列 a 會隱性轉型成第一個元素的位址
    // int *b = &a[0]; // 等同於此行

    for (int i = 0; i !=3; i++){
        cout << b[i] << endl;
        // <規定> 下標運算 b[i] 會被轉換成 *(b + i)
        // 因此 b[i] 和 *(b + i) 是等價的
        // 又因 b = &a[0]
        // 所以 b[i] 和 *(&a[0] + i) 是等價的
        // c 規定位址 &a[0] 可以加整數 i 來表示 &a[i]
        // 因此 b[i] = *(&a[i]) = a[i] 
        // b[i] = *(b + i) = *(&a[0] + i) = *&a[i] = a[i]
    }

    return 0;
}