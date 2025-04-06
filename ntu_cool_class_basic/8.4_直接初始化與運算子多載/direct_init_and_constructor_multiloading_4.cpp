#include <iostream>

using namespace std;

class Grade{
    public:

        Grade() {
            cout << "Grade()" << endl;
        }; 

        Grade(int v){ 
            cout << "Grade(int v): " << v << endl;
        }
};

int main(){
    Grade g1(3); // 直接初始化
    Grade g2{5}; // 直接初始化
    Grade g3; // 預設初始化
    
    return 0;
}