#include <iostream>
using namespace std;

class Grade {
    public:
        Grade();
        Grade(int v);

        int value;

        const Grade operator+(const Grade& rhs) const;
};

ostream& operator<<(ostream& os, const Grade& g);

int main() {
    Grade g1 = 37, g2 = 74;
    cout << "g1 + g2 = " << g1 + g2 << endl;
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

const Grade Grade::operator+(const Grade& rhs) const {
    return value + rhs.value; // 37 + 74 = 111, 此時 int 會隱性轉型為 Grade（呼叫 Grade(int v)）
    // 即 111 會被拿去初始化 Grade 的暫時物件
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}