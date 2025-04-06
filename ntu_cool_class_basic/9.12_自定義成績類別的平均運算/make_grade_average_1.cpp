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
    Grade g3 = (g1 + g2) / 2; // 計算 g1 與 g2 的平均值

    cout << "g3: " << g3 << endl; // 80 與 90 的平均值是 50 嗎？
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

const Grade operator/(const Grade& lhs, const Grade& rhs) {
    return lhs.value / rhs.value;
}