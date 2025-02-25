#include <iostream>
using namespace std;

int main()
{
    // 1. 大部分的字面常數不能取位址
    // int *b = &3; // 錯誤，3 是右值，不能取位址

    int a = 3;
    int *b = &a; // 正確，a 是左值，可以取位址

    // 2. 暫時物件無法取位址
    // int a = 3;
    // int *b = &(a + 1); // 錯誤，a + 1 是暫時物件，不能取位址

    // 3. 可以連續進行兩次取址運算嗎？ 不行
    // int a = 3;
    // int *b = &(&a); // 錯誤，&a 是暫時物件，不能取位址

    return 0;
}