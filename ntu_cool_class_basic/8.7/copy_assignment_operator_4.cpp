#include <iostream>
using namespace std;

class Grade{
    public:
        Grade();
        Grade(const Grade&);

        // 回傳值該用 Grade 嗎？
        Grade operator=(const Grade&){
            cout << "Grade operator=(const Grade&)" << endl;
            return (*this); // 回傳物件複製一份
        }
};

int main(){
    Grade g1; 
    Grade g2 = g1;
    Grade g3 = g2 = g1; // g3 是複製初始化，g2 是複製賦值運算 g1
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}

Grade::Grade(const Grade&){
    cout << "Grade::Grade(const Grade&)" << endl;
}