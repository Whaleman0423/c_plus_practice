#include <iostream>
using namespace std;

class Grade{
    public: // 如果使用 public，將無法組只使用者修改到 value 的內容，而造成其不符合原有設計的要求
        Grade();
        Grade(int v);
        Grade operator+(const Grade& rhs) const;
        int value;
};

ostream& operator<<(ostream&, const Grade&);

int main() {
    Grade g;
    g.value = 120;
    cout << "g: " << g << endl;
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

Grade Grade::operator+(const Grade& rhs) const {
    return value + rhs.value;
}

ostream& operator<<(ostream& os, const Grade& g) {
    os << g.value;
    return os;
}