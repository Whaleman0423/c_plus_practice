#include <iostream>
using namespace std;

class IntArray{
    public:
        IntArray(); // 自定義預設建構子
        int Size() const;

        int& operator[](int i);

        // 需要新增唯讀的 operator[]，讓唯讀的物件可以呼叫唯讀的成員函式（operator<<函式內用到）
        int operator[](int i) const;

    private:
        int data[5];
};

ostream& operator<<(ostream&, const IntArray&);

int main() {
    IntArray a;
    a[2] = 7;
    a[3] = 5;

    cout << "a: " << a << endl;

    return 0;
}

// 給定陣列元素的初始值 0
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

// 更新 operator<< 的實作，打印 IntArray 的元素
ostream& operator<<(ostream& os, const IntArray& a) {
    os << "[" << a[0];
    for (int i = 1; i < a.Size(); i++) {
        os << ", " << a[i]; // a 是唯讀的，只能呼叫有 const 的 operator[]，唯讀的物件只能呼叫唯讀的成員函式
    }
    os << "]";
    return os;
}

int IntArray::Size() const {
    return 5;
}
