#include <iostream>

using namespace std;

/* 編譯錯誤範例  */

class Grade{
    public:
        Grade();
        Grade(Grade g){ // 複製建構子
            cout << "Grade::Grade(Grade g)" << endl;
        }
};

int main(){
    Grade g1;
    Grade g2(g1); // 呼叫複製建構子，但又會將引數 g1 複製給參數 g 而造成無窮遞迴
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}