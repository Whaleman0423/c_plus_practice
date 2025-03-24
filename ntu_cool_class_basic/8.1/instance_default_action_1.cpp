#include <iostream>

using namespace std;

/* 編譯錯誤範例 */

class Grade; // 僅宣告，未定義

int main(){
    Grade g1; // 編譯錯誤，未定義
    return 0;
}