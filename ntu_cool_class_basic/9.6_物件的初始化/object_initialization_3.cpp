#include <iostream>

using namespace std;

class Grade{
    public:
        Grade(int){
            cout << "Grade(int)" << endl;
        };
};

int main(){
    // 直接初始化
    Grade(3);
    Grade{3};
    Grade a(3);
    /* 直接初始化時，會呼叫帶有參數的建構子 Grade::Grade(int) */
}