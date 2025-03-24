#include <iostream>

using namespace std;

class Grade{
}; // 若無定義預設建構子，C++ 會自動生成一個預設版本的預設建構子

int main(){
    Grade g1; // 預設初始化時會自動呼叫預設建構子
    return 0;
}