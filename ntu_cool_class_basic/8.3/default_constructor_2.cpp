#include <iostream>

using namespace std;

class Grade{
    public:
        Grade() = default; // 預設建構子，等同於 Grade::Grade(){}
        // 上一行的效果也等於什麼都不加，讓 C++ 自動生成預設建構子
};

int main(){
    Grade g1; // 預設初始化時會自動呼叫預設建構子
    return 0;
}