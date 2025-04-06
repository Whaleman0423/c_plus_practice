#include <iostream>
using namespace std;

class Grade{
    public:
        Grade(){
            cout << "Grade::Grade()" << endl;
        };
        ~Grade(){
            cout << "Grade::~Grade()" << endl;
        };
};

int main(){
    Grade g1;
    Grade g2;
    // g1 與 g2 哪一個會先呼叫解構子呢？
    return 0; 
}
