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
    Grade g = 120;
    cout << "g = " << g << endl;
    return 0;
}

Grade::Grade() {
    value = 0;
}

// 如果大於 100 則設為 100; 如果小於 0 則設為 0
Grade::Grade(int v) {
    if (v > 100) {
        v = 100;
    } else if (v < 0) {
        v = 0;
    } 
    value = v;
}

const Grade Grade::operator+(const Grade& rhs) const {
    return value + rhs.value;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}