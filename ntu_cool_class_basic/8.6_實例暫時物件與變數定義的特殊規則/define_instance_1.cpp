#include <iostream>

using namespace std;

class Grade{
    public:
        Grade(){ // 預設建構子
            cout << "Grade()" << endl;
        }
        Grade(int){
            cout << "Grade(int)" << endl;
        }
};

int main(){
    Grade g1;
    // Grade g2(); // 會被解譯成函式名稱宣告
    // Grade(g1); // 會被認為是在定義 g1, 等於 Grade g1;

    Grade();
    Grade(3);
    Grade{};
    Grade{3};

    Grade g4{};
    Grade{g1};
    
    return 0;
}