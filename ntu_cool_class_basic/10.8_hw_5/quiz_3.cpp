/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

class IntArray {
public:
    IntArray();
    int operator[](int i) const;
    int& operator[](int i);
    int Size() const;
private:
    int data[5];
};

ostream& operator<<(ostream&, const IntArray&);

int main() {
    IntArray a;
    a[2] = 7;
    a[3] = 5;
    a[4] = 9;
    const IntArray b = a;
    cout << "a[7]: " << a[7] << endl    // a[7]  == a[2]
         << "a[18]: " << a[18] << endl  // a[18] == a[3]
         << "a[25]: " << a[25] << endl  // a[25] == a[0]
         << "b[29]: " << b[29] << endl; // b[29] == b[4]
    return 0;
}

ostream& operator<<(ostream& os, const IntArray& a) {
    os << "[" << a[0];
    for (int i = 1; i < a.Size(); i++) {
        os << ", " << a[i];
    }
    os << "]";
    return os;
}

IntArray::IntArray() {
    for (auto& v : data) {
        v = 0;
    }
}

int IntArray::operator[](int i) const { // 當物件定義為 const 時需要使用此成員函式
    if (i >= 5){ // 大於等於 5 的索引，需要重頭開始取
        return data[i % 5];
    }
    return data[i];
}

int& IntArray::operator[](int i)  {
    if (i >= 5){ // 大於等於 5 的索引，需要重頭開始取
        return data[i % 5];
    }
    return data[i];
}

int IntArray::Size() const {
    return 5;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/0f5ca01f5f283963
a[7]: 7
a[18]: 5
a[25]: 0
b[29]: 9
*/