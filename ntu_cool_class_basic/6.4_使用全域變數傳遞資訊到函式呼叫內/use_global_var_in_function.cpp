#include <iostream>

using namespace std;

void Print();

// case1
// char str[13];

// case2: 使用指標
const char* str;

int main(){
    // case1
    // str = "Hello\nWorld!"; // 編譯錯誤，C方格陣列(字串陣列)在初始化之外不能直接賦值
    
    // case2
    str = "Hello\nWorld!"; // 可以，記憶體位址（指標）可以複製
    
    Print();

    return 0;
}

void Print(){
    std::cout << str << endl;
}