#include <iostream>

using namespace std;

class Grade{
    public:

        // 為了避免沒有預設建構子
        Grade() = default; 
        // 當有多個建構子，此時會發生建構子多載，當產生物件時，會根據引數的數量和型別來決定呼叫哪個建構子

        Grade(int v){ 
            cout << "Grade(int v): " << v << endl;
        }
};

int main(){
    Grade g1;
    Grade g2{3};
    
    return 0;
}