#include <iostream>

using namespace std;

/* 編譯錯誤範例  */

class Grade{
    public:
        Grade();
        Grade(int v);

        int value;
};

int main(){
    Grade g1 = 37, g2 = 23;

    cout << "g1 + g2 = " << g1 + g2 << endl; // 編譯錯誤，因為沒有定義 + 運算子
}