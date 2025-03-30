#include <iostream>

using namespace std;

class Grade{
    public:
        Grade();
        Grade(int v);
        const Grade operator+(const Grade&);
        int value;
};

ostream& operator<<(ostream&, const Grade&);
// 使用一般函式來進行加法
const Grade operator+(const Grade&, const Grade&);

int main() {
    Grade g1 = 37, g2 = 74;

    cout << "g1 + g2 = " << g1 + g2 << endl
         << "g1 + 74 = " << g1 + 74 << endl
         << "37 + g2 = " << 37 + g2 << endl
         << "37 + 74 = " << 37 + 74 << endl;

    return 0;
}

const Grade Grade::operator+(const Grade& rhs) {
    return value + rhs.value;
}

const Grade operator+(const Grade& lhs, const Grade& rhs) {
    cout << "operator+(const Grade&, const Grade&)"<< lhs.value << " + " << rhs.value << endl;
    return lhs.value + rhs.value;
}

Grade::Grade(int v){
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}