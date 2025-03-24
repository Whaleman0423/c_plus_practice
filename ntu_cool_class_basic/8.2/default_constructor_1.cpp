#include <iostream>

using namespace std;

class Grade{
    public:
        Grade(){ // 建構子, 若無定義建構子，編譯器會自動生成預設建構子(預設初始化時自動呼叫的特殊成員函式)
            cout << "Grade::Grade()" << endl;
        }

        // 預設建構子不能有回傳值與參數
};

int main(){
    Grade g1; // 在物件建構時，會自動呼叫建構子；名稱與所屬類別相同且無回傳值的特殊成員函式
    return 0; // <規則>產生物件時會配置記憶體並呼叫物件的建構子
}