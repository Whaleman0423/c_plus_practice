#include <iostream>
using namespace std;

class IntArray{
};

ostream& operator<<(ostream&, const IntArray&);

int main() {
    IntArray a;
    cout << "a: " << a << endl; // 會試著呼叫 operator<<(cout, a)
    return 0;
}

ostream& operator<<(ostream& os, const IntArray& a) {
    os << "[" << 0;
    for (int i = 1; i < 5; i++) { // 但是 5 寫死了之後就不好改了
        os << ", " << 0;
    }
    os << "]";
    return os;
}