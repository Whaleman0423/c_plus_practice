#include <iostream>

using namespace std;

int main(){
    // case1
    // int a[3] = {1, 2, 3};
    // int (*b)[3] = &a; // b 會是陣列 a 的位址
    // // int *b[3] = &a; // 編譯錯誤

    // for (int i = 0; i != 3; i++){
    //     cout << (*b)[i] << endl;
        
    //     cout << b[i] << endl; // 未定義行為
    //     // b[i] = (&a)[i] = *(&a + i) => 未定義行為
    // }


    // case2: C++ 使用參考，較常見
    int a[3] = {1, 2, 3};
    int (&b)[3] = a; // b 會是陣列 a 的參考

    for (int i = 0; i != 3; i++){
        cout << b[i] << endl;
    }

    return 0;
}