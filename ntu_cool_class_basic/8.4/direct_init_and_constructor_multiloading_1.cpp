#include <iostream>

using namespace std;

class Grade{
    public:


        Grade(int v){ // 建構子也是成員函式，可以有零到多個參數！
            cout << "Grade(int v): " << v << endl;
        }
};

int main(){
    Grade g1(3); // 直接初始化：透過一到多個建構子引數初始化
    Grade g2{4};
    
    return 0;
}