#include <iostream>

using namespace std;

class Grade{
    public:
        Grade(); // 建構子也跟其他成員函式一樣，可以將宣告與定義分開
};

int main(){
    Grade g1; // 預設初始化時會自動呼叫預設建構子
    return 0; 
}

// 分開定義時，記得名稱前一樣要加上 類別名稱:: 的前綴
Grade::Grade(){ // 記得預設建構子不能有回傳值與參數
    cout << "Grade::Grade()" << endl;
}