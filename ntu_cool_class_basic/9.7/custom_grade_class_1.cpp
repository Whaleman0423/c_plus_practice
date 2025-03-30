#include <iostream>

using namespace std;

/* 編譯錯誤範例  */

class Grade{}; // 自定義的 Grade 類別可以用 cout 印出嗎？

int main(){
    Grade g;
    cout << "g: " << g << endl;
    return 0;
}