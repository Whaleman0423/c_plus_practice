#include <iostream>

using namespace std;

class Grade{
    public:
        Grade();
        // <規則>單一參數的建構子預設讓該參數型態可隱性轉型成該類別實例物件
        Grade(int v);
        const Grade operator+(const Grade& rhs) const;
        int value;
};

ostream& operator<<(ostream&, const Grade&);

int main() {
    Grade g1 = 37;
    cout << "g1 + 23 = " << g1 + 23 << endl; // 隱性轉型：int 轉型成 Grade 暫時物件; const T& rhs 可參考暫時物件
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