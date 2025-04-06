#include <iostream>

using namespace std;

/* 編譯錯誤範例  */

class Grade{
    public:
        Grade();
        Grade(int v);
        const Grade operator+(const Grade&);
        int value;
};

ostream& operator<<(ostream&, const Grade&);

int main() {
    Grade g1 = 37, g2 = 74;

    cout << "g1 + g2 = " << g1 + g2 << endl
         << "g1 + 74 = " << g1 + 74 << endl
         << "37 + g2 = " << 37 + g2 << endl // 37 在前面的話不會觸發隱性轉型 
         // 而是會觸發 37.operator+(g2) 但 37 是 int 型態，所以會報錯
         // 只會在函式呼叫的時候（operator+(int)）觸發隱性轉型將 int 轉換為 Grade
         << "37 + 74 = " << 37 + 74 << endl;

    return 0;
}

const Grade Grade::operator+(const Grade& rhs) {
    return value + rhs.value;
}

Grade::Grade(int v){
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}