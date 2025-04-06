#include <iostream>
using namespace std;

class Grade{
    public:
        Grade();
        Grade(const Grade&);
};

int main(){
    Grade g1; // 預設預設初始化：沒給初始值的情況下建構物件
    Grade g2 = g1; // 複製初始化：用同型態物件初始化物件
    g2 = g1; // 複製賦值運算：複製賦值同型態物件到已有物件;運算子多載（chapter 7.14），會試著呼叫 g2.operator=(g1)
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}

Grade::Grade(const Grade&){
    cout << "Grade::Grade(const Grade&)" << endl;
}