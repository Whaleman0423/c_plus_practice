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
const Grade Average(const Grade& lhs, const Grade& rhs); // 改成一般函式

int main() {
    Grade g1 = 80, g2 = 90;
    Grade g3 = Average(g1, g2);

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
    return lhs.value + rhs.value;
}

const Grade Average(const Grade& lhs, const Grade& rhs) {
    return (lhs.value + rhs.value) / 2; // 做完平均之後才去執行 Grade(int v) 的檢查並轉型回 Grade
}