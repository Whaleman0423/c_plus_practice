#include <iostream>

using namespace std;

class Grade{
    public:
        Grade() = default;
        Grade(int){
            cout << "Grade(int)" << endl;
        };
};

int main(){
    // 複製初始化(copy initialization)
    Grade a;
    Grade b = a;
    Grade c(a);
    Grade d{a};
    /* 複製初始化時，會呼叫預設建構子 Grade::Grade() */
}