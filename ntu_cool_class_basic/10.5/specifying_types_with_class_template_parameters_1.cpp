#include <iostream>
using namespace std;

template<int N>
class IntArray{
    public:
        IntArray();
        int operator[](int i) const;
        int& operator[](int i);
        int Size() const;
    private:
        int data[N]; // IntArray 的元素型態也需要在編譯時就確定
};

template<int N>
ostream& operator<<(ostream&, const IntArray<N>&);

int main() {
    IntArray<5> a; // 如果想要讓陣列可以選擇不同的元素型態，該怎麼辦？
    a[2] = 7;
    a[3] = 5;

    cout << "a: " << a << endl;

    return 0;
}

template<int N>
IntArray<N>::IntArray() {
    for (int& v : data) {
        v = 0;
    }
}

template<int N>
int& IntArray<N>::operator[](int i) {
    return data[i];
}

template<int N>
int IntArray<N>::operator[](int i) const {
    return data[i];
}

template<int N>
ostream& operator<<(ostream& os, const IntArray<N>& a) {
    os << "[" << a[0];
    for (int i = 1; i < a.Size(); i++) {
        os << ", " << a[i]; 
    }
    os << "]";
    return os;
}

template<int N>
int IntArray<N>::Size() const {
    return N;
}