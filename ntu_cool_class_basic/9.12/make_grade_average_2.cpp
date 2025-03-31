#include <iostream>
using namespace std;

class Grade {
    public:
        Grade();
        Grade(int v);

        int value;
};

ostream& operator<<(ostream& os, const Grade& g);
const Grade operator+(const Grade& lhs, const Grade& rhs);
const Grade operator/(const Grade& lhs, const Grade& rhs);

int main() {
    Grade g1 = 80, g2 = 90;
    Grade g3 = (g1 + g2) / 2; // 因為 80 + 90 = 170，超過 100，相加之後會被轉換為 100，接著再除以 2 得到 50

    cout << "g3: " << g3 << endl;
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

const Grade operator/(const Grade& lhs, const Grade& rhs) {
    return lhs.value / rhs.value;
}