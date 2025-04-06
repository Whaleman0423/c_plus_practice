#include <iostream>
using namespace std;

class IntArray{
    public:
        int Size() const;
};

ostream& operator<<(ostream&, const IntArray&);

int main() {
    IntArray a;
    a[2] = 7;
    a[3] = 5; // 想讓 IntArray 實例物件用起來像陣列一樣可以用 [] 取得元素

    cout << "a: " << a << endl;

    return 0;
}

ostream& operator<<(ostream& os, const IntArray& a) {
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