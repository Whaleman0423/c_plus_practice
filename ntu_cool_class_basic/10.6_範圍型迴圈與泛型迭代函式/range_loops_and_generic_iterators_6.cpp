#include <iostream>
using namespace std;

template<typename T, int N>
class Array{
    public:
        Array();
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
    Array<int, 5> a;
    a[2] = 7;
    a[3] = 5;

    // 因為有額外定義 begin() 和 end() 函式，所以可以這樣寫
    for (int n : a){ // 支援 begin() 和 end() 的迭代語法後，就可以使用範圍型的迴圈
        cout << n << " ";
    }

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
