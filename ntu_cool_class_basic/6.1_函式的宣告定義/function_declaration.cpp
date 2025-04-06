#include <iostream>

using namespace std;

// 宣告一個函式
void Print2();

void Print(){
    std::cout << "Hello\nWorld!" << endl;
}

int main(){
    Print();
    Print2();
    return 0;
}

// 定義一個函式
void Print2(){
    std::cout << "Hello\nWorld!" << endl;
}