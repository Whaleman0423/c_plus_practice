#include <iostream>
using namespace std;

class IntArray{
    public:
        // 方法一：使用 size 成員函式
        int Size() const;
};

ostream& operator<<(ostream&, const IntArray&);

int main() {
    IntArray a;
    cout << "a: " << a << endl;
    return 0;
}

ostream& operator<<(ostream& os, const IntArray& a) { // 因為 a 是 const，所以 operator<< 也要是 const
    os << "[" << 0;
    for (int i = 1; i < a.Size(); i++) {
        os << ", " << 0;
    }
    os << "]";
    return os;
}

int IntArray::Size() const {
    return 5;
}