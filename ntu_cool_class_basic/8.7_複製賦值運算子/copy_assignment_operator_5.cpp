#include <iostream>
using namespace std;

class Grade{
    public:
        Grade();
        Grade(const Grade&);

        Grade& operator=(const Grade&){
            cout << "Grade& operator=(const Grade&)" << endl;
            return (*this); // 回傳物件本身
        }
};

int main(){
    Grade g1; 
    Grade g2 = g1;
    Grade& g3 = g2 = g1; // g3 參考 g2; g2 複製賦值運算，回傳 g2 本身，所以 g3 也參考 g2
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}

Grade::Grade(const Grade&){
    cout << "Grade::Grade(const Grade&)" << endl;
}