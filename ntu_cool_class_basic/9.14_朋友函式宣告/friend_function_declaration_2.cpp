#include <iostream>
using namespace std;

/* 編譯錯誤範例 */

class Grade{
    public:
        Grade();
        Grade(int v);
        Grade operator+(const Grade& rhs) const;
    private:
        int value; // 將 value 設為 private，使得只有類別內的函式可以存取，而無法被外部存取
};

// 但是 operator<< 是類別外的函式，無法存取 value，又該怎麼辦？
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