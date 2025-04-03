#include <iostream>
using namespace std;

/* 編譯錯誤範例 */

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
    // 有的時候，我們想用 {} 來初始化自定義的 Array 物件
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
