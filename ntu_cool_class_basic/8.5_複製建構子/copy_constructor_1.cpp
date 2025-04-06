#include <iostream>

using namespace std;

class Grade{
    public:
        Grade();
};

int main(){
    Grade g1;
    Grade g2 = g1; // 複製初始化: 用同型態物件初始化物件
    // <規則> Grade g2 = g1 等同於 Grade g2(g1)
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}