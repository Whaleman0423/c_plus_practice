#include <iostream>

using namespace std;

/* 編譯錯誤範例  */

class Grade{
    public:
        Grade();
        Grade(Grade& g){ 
            cout << "Grade::Grade(Grade&)" << endl;
        }
};

int main(){
    const Grade g1; // 常數物件不能被複製
    Grade g2(g1); // 唯讀物件無法被非唯讀參考所參考
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}