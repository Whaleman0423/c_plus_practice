#include <iostream>

using namespace std;

int main(){
    int a[5] = {3, 9, 1, 7, 2};

    cout << a; // 印出 a 的記憶體位置，而不是陣列的內容，為什麼？
    // int[5] 隱性轉型成 int*
    // int* 可隱性轉型成 void*
    // void* 可隱性轉型成 const void*
    // 陣列會被當指標印出記憶體位置
    
    
    return 0;
}