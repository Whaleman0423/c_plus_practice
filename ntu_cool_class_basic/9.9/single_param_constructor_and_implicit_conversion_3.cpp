#include <iostream>

using namespace std;

class Grade{
    public:
        Grade();
        Grade(int v);
        const Grade operator+(const Grade& rhs) const;
        int value;
};

ostream& operator<<(ostream&, const Grade&);

int main() {
    Grade g1 = 37; // 37 呼叫 Grade(int)
    cout << "g1 + 23 = " << g1 + 23 << endl;  // 23 呼叫 Grade(int)
    return 0;
}

const Grade Grade::operator+(const Grade& rhs) const {
    return value + rhs.value; // 60 呼叫 Grade(int)
}

Grade::Grade(int v){
    cout << "Grade(int):" << v << endl;
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}