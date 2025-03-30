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
    Grade g = 120; // 如果希望成績限制在 0~100 之間，該怎麼做？
    cout << "g = " << g << endl;
    return 0;
}

Grade::Grade() {
    value = 0;
}

Grade::Grade(int v) {
    value = v;
}

const Grade Grade::operator+(const Grade& rhs) const {
    return value + rhs.value;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}