#include <iostream>
using namespace std;

class Grade{
    public:
        Grade();
        Grade(const Grade&) = delete; // 把複製建構子設為 delete，禁止複製
        Grade& operator=(const Grade&) = delete; // 把複製賦值運算子設為 delete，禁止複製
};
/*
    可以使用 delete 移除 預設的複製建構子 與 複製賦值運算子
    我們讓特定類別的實例物件不能被複製的能力

    如果都沒寫，編譯器會自動生成預設的複製建構子與複製賦值運算子
*/

int main(){
    Grade g1; 
    Grade g2 = g1;
    g2 = g1;
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}
