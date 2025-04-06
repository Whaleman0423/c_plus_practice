#include <iostream>
using namespace std;

class Grade{
    // 宣告 friend 函式，使得 operator<< 可以存取 Grade 的 private 成員
    friend ostream& operator<<(ostream&, const Grade&);
    
    public:
        Grade();
        Grade(int v);
        Grade operator+(const Grade& rhs) const;
    private:
        int value; 
};

ostream& operator<<(ostream&, const Grade&);

int main() {
    Grade g;
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