#include <iostream>

using namespace std;

// void Print(const char* str); 
void Print(const char*); // 宣告的時候可以省略參數名稱

int main(){
    Print("Hello\nWorld!"); // 呼叫的時候會用引數去配對參數來做初始化
    return 0;
}

void Print(const char* str){
    cout << str << endl;
}