#include <iostream>
using namespace std;

template<typename T, int N> // 將元素型態作為模板參數 T 傳入
class Array{
    public:
        Array();
        T& operator[](int i);
        T operator[](int i) const;
        int Size() const;
    private:
        T data[N]; // IntArray 的元素型態也需要在編譯時就確定
};

template<typename T, int N>
ostream& operator<<(ostream&, const Array<T, N>&);

int main() {
    Array<int, 5> a; // 如果想要讓陣列可以選擇不同的元素型態，該怎麼辦？
    a[2] = 7;
    a[3] = 5;

    cout << "a: " << a << endl;

    return 0;
}

template<typename T, int N>
Array<T, N>::Array() {
    for (T& n : data) { // 將初始化尋訪的元素改為 T 型態
        n = T(); // 使用 T 的預設建構子初始化
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