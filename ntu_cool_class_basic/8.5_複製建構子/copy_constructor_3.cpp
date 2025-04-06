#include <iostream>

using namespace std;

class Grade{
    public:
        Grade();
        Grade(Grade& g){ // 傳遞參考可以避免發生複製觸發無窮遞迴
            cout << "Grade::Grade(Grade& g)" << endl;
        }
};

int main(){
    Grade g1;
    Grade g2(g1); 
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}