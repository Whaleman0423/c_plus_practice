#include <iostream>
using namespace std;

class IntArray{
    public:
        int Size() const;

        // 新增 下標運算子 []
        int& operator[](int i);

    private:
        int data[5];
};

ostream& operator<<(ostream&, const IntArray&);

int main() {
    IntArray a;
    a[2] = 7; // a[2] = 7 會執行 a.operator[](2) = 7
    a[3] = 5;
    // 要讓 7 賦值於 a[2]，需要讓 operator[] 回傳 參考

    cout << "a: " << a << endl;

    return 0;
}

// 下標運算子 [] 的實作
int& IntArray::operator[](int i) {
    return data[i];
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