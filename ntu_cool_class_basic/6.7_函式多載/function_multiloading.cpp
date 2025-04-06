#include <iostream>

using namespace std;

// 0. 只有定義帶有 const char* 的 Print 函式
void Print(const char*);

// 2. 需要新增帶有 char 的 Print 函式 => 函式多載
void Print(char);

int main(){
    Print("Hello");
    Print('\n'); // 1. 這樣會報錯，因為 '\n' 是字元，不是字串; 字元不能隱性轉型成字元指標
    Print("World!");

    return 0;
}

void Print(const char* str){
    cout << str ;
}

void Print(char ch){
    cout << ch;
}