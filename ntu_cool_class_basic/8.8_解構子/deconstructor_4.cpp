#include <iostream>
using namespace std;

class Grade{
    public:
        Grade() {
            cout << "Grade::Grade()" << endl;
        };
        ~Grade() = default; // 解構子也會有預設版本的
};

int main(){
    Grade g1;
    return 0;
}
