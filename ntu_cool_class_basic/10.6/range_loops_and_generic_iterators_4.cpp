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
ostream& operator<<(ostream&, const Array<T, N>&);

int main() {
    Array<int, 5> a;
    a[2] = 7;
    a[3] = 5;

    // 可以讓我們自定義的 Array 類別模板也能使用 begin() 和 end() 函式嗎？ 
    // 不行，因為 begin() 和 end() 函式需要的是 內建的陣列型態，而不是我們自定義的 Array 類別模板
    for (int* p = begin(a); p != end(a); p++){
        int n = *p;
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