#include <iostream>
using namespace std;

class IntArray{
    public:
        IntArray();
        int operator[](int i) const;
        int& operator[](int i);
        int Size() const;
    private:
        int data[5]; // IntArray 的陣列長度在編譯時就要確定; 不能用變數動態地改變
};

ostream& operator<<(ostream&, const IntArray&);

int main() {
    IntArray a;
    a[2] = 7;
    a[3] = 5;

    cout << "a: " << a << endl;

    return 0;
}

IntArray::IntArray() {
    for (int& v : data) {
        v = 0;
    }
}

int& IntArray::operator[](int i) {
    return data[i];
}

int IntArray::operator[](int i) const {
    return data[i];
}

ostream& operator<<(ostream& os, const IntArray& a) {
    os << "[" << a[0];
    for (int i = 1; i < a.Size(); i++) {
        os << ", " << a[i];
    }
    os << "]";
    return os;
}

int IntArray::Size() const {
    return 5;
}