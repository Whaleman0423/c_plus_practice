#include <iostream>

using namespace std;

// 可以在 main 函數外宣告
// void Print();

int main(){
    // Print(); // 編譯錯誤，在執行後才去定義函數，會報錯

    // 在 main 函數中也可以宣告，但不能在 main 函數中定義
    // 在連結的階段會去配對 Print 函數，
    void Print();
    Print();

    // 如果沒有配對到，就會產生連結失敗
    void Print2();
    Print2();

    return 0;
}

// 在執行後才去定義函數
void Print(){
    std::cout << "Hello\nWorld!" << endl;
}