#include <iostream>

using namespace std;

class Grade{};

int main(){
    // 值初始化
    Grade();
    Grade{};
    Grade a{};
    /* 值初始化時，會呼叫預設建構子 Grade::Grade() */

    // 內建資料型態
    int();
    int{};
    int b{};
    /* 內建資料型態值初始化時，會將資料初始化為 0 */
}