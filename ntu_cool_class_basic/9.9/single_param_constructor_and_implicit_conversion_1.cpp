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
    Grade g1 = 37;
    cout << "g1 + 23 = " << g1 + 23 << endl; // Grade 可以與 int 相加嗎？
    return 0;
}

const Grade Grade::operator+(const Grade& rhs) const {
    return value + rhs.value;
}

Grade::Grade(int v){
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}