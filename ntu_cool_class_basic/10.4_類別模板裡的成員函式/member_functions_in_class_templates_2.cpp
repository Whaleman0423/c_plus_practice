#include <iostream>
using namespace std;

// 把 IntArray 做成類別模板後，將陣列長度作為模板參數傳入
template<int N>
class IntArray{
    public:
        // 類別模板裡的成員函式對不同的類別都需要產生專屬的一份，因此也都成為了函式模板
        IntArray(); // IntArray 是類別模板名稱, IntArray<整數> 才是完整的類別名稱
        int operator[](int i) const;
        int& operator[](int i);
        int Size() const;
    private:
        int data[N];
};

// 所有有用到 IntArray 的地方，也要改成模板
template<int N>
ostream& operator<<(ostream&, const IntArray<N>&); // operator<< 使用到 IntArray 作為函式參數的型態，所以也要做成函式模板

int main() {
    IntArray<5> a;
    a[2] = 7;
    a[3] = 5;

    cout << "a: " << a << endl;

    return 0;
}

// 雖然函式定義內容幾乎一模一樣，但是因為所屬的類別不同就需要定義不同的版本
template<int N>
IntArray<N>::IntArray() { // 要注意的例外是建構子名稱依舊和類別模板相同，不包含 <模板引數>
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