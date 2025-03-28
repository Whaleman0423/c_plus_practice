#include <iostream>

using namespace std;

class Grade{
    public:

        // 當有定義任意的建構子時，預設版本的預設建構子（無參數）將不再自動生成
        Grade(int v){ 
            cout << "Grade(int v): " << v << endl;
        }
};

int main(){
    Grade g1; // 預設初始化，會呼叫預設建構子，但無預設建構子，從而導致編譯錯誤
    
    return 0;
}