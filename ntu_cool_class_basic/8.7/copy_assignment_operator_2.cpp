#include <iostream>
using namespace std;

class Grade{
    public:
        Grade();
        Grade(const Grade&);

        // 回傳值該用 void 嗎？
        void operator=(const Grade&){
            cout << "void operator=(const Grade&)" << endl;
        }
};

int main(){
    Grade g1; 
    Grade g2 = g1;
    g2 = g1;
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}

Grade::Grade(const Grade&){
    cout << "Grade::Grade(const Grade&)" << endl;
}