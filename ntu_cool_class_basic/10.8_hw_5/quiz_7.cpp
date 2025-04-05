/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

template<typename T>
class Grade {
public:
    Grade();
    Grade(T v);
    Grade operator+(const Grade& rhs) const;
    T getValue() const;
private:
    T value;
};

template<typename T>
ostream& operator<<(ostream&, const Grade<T>&);

int main() {
    Grade<int>    a1 = 37.45,  b1 = 43.56;
    Grade<double> a2 = 37.45,  b2 = 43.56;
    cout << "1) " << (a1 + b1) << endl
         << "2) " << (a2 + b2) << endl;
    return 0;
}

template<typename T>
ostream& operator<<(ostream& os, const Grade<T>& g) {
    os << g.getValue();
    return os;
}

template<typename T>
Grade<T>::Grade() {
    value = 0;  
}

template<typename T>
Grade<T>::Grade(T v) {
    if (v < 0) {
        v = 0;
    } else if (v > 100) {
        v = 100;
    }
    value = v;
}

template<typename T>
Grade<T> Grade<T>::operator+(const Grade<T>& rhs) const {
    T result = value + rhs.value;
    if (result > 100) {
        result = 100;
    }
    return result;
}

template<typename T>
T Grade<T>::getValue() const {
    return value;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/09a70fc00cb829cc
1) 80
2) 81.01
*/