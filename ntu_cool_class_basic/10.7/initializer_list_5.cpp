#include <iostream>
using namespace std;

template<typename T, int N>
class Array{
    public:
        Array();
        Array(initializer_list<T> l); // 需要新增初始化列表的建構子
        T& operator[](int i);
        T operator[](int i) const;
        int Size() const;
    private:
        T data[N];
};

template<typename T, int N>
T* begin(Array<T, N>&);

template<typename T, int N>
T* end(Array<T, N>&);

template<typename T, int N>
ostream& operator<<(ostream&, const Array<T, N>&);

int main() {
    Array<int, 5> a = {1, 2, 3, 4, 5};
    cout << "a: " << a << endl;

    return 0;
}

template<typename T, int N>
Array<T, N>::Array() {
    for (T& n : data) {
        n = T();
    }
}

template<typename T, int N>
T& Array<T, N>::operator[](int i) {
    return data[i];
}

template<typename T, int N>
T Array<T, N>::operator[](int i) const {
    return data[i];
}

template<typename T, int N>
ostream& operator<<(ostream& os, const Array<T, N>& a) {
    os << "[" << a[0];
    for (int i = 1; i < a.Size(); i++) {
        os << ", " << a[i]; 
    }
    os << "]";
    return os;
}

template<typename T, int N>
int Array<T, N>::Size() const {
    return N;
}

template<typename T, int N>
T* begin(Array<T, N>& a) {
    return &a[0];
}

template<typename T, int N>
T* end(Array<T, N>& a) {
    return &a[N];
}

template<typename T, int N>
Array<T, N>::Array(initializer_list<T> l) {
    int i = 0;
    for (T n : l){ // 需逐一複製到陣列內，因為 initializer_list 沒有支援 operator[]
        data[i] = n;
        i++;
    }
}