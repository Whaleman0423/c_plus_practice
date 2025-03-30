#include <iostream>
using namespace std;

class Grade {
    public:
        Grade();
        Grade(int v);

        int value;

};

ostream& operator<<(ostream& os, const Grade& g);

// 使用一般函式來進行加法
const Grade operator+(const Grade& lhs, const Grade& rhs);

int main() {
    Grade g1 = 37, g2 = 74;
    cout << "g1 + g2 = " << g1 + g2 << endl
         << "g1 + 74 = " << g1 + 74 << endl
         << "37 + g2 = " << 37 + g2 << endl
         << "37 + 74 = " << 37 + 74 << endl; // 只有整數相加會直接相加，不會做 Grade 的檢查，因為是使用內建的 operator+
    return 0;
}

Grade::Grade() {
    value = 0;
}

Grade::Grade(int v) {
    if (v > 100) {
        v = 100;
    } else if (v < 0) {
        v = 0;
    } 
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}

const Grade operator+(const Grade& lhs, const Grade& rhs) {
    return lhs.value + rhs.value; // 加完的值都會是 int 型態，接著會隱性轉型為 Grade，並且都會做 Grade(int v) 與其內部的檢查
}