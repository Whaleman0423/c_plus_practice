#include <iostream>
using namespace std;

class Grade{
    public:
        Grade();
        Grade(const Grade&);
        Grade& operator=(const Grade&); // 把定義抽出來
};

int main(){
    Grade g1; 
    Grade g2 = g1;
    Grade& g3 = g2 = g1;
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}

Grade::Grade(const Grade&){
    cout << "Grade::Grade(const Grade&)" << endl;
}

Grade& Grade::operator=(const Grade&){
            cout << "Grade& operator=(const Grade&)" << endl;
            return (*this); 
}