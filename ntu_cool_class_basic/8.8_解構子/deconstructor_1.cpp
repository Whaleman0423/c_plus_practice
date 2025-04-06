#include <iostream>
using namespace std;

class Grade{
    public:
        Grade(){
            cout << "Grade::Grade()" << endl;
        };
        ~Grade(){ // 解構子
            cout << "Grade::~Grade()" << endl;
        };
};

/*
產生物件:
- 配置記憶體
- 呼叫建構子

刪除物件:
- 呼叫解構子
- 釋放記憶體
*/

int main(){
    Grade g1;
    return 0; // 解構子: 當實例物件的生命週期結束時，會自動呼叫的特殊成員函式
}
