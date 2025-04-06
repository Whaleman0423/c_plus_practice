#include <iostream>

using namespace std;

class Grade{
    public:
        Grade() = delete; // 刪除預設建構子，將造成編譯錯誤
};

int main(){
    Grade g1; // 預設初始化時會自動呼叫預設建構子
    // 沒有預設建構子，就不能做預設初始化，從而導致編譯錯誤
    return 0;
}