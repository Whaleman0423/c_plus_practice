/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

class Grade {
    friend ostream& operator<<(ostream&, Grade);
public:
    Grade(int v);
    bool operator<(Grade g); // 宣告 operator< 成員函式, 用來比較兩個 Grade 物件
private:
    int value;
};

template<typename T>
void MySort(T& a, T& b) {
    if (a < b) {
        return;
    }
    swap(a, b);
}

int main() {
    int    a1 = 3, b1 = 5;
    double a2 = 7, b2 = 4;
    Grade  a3 = 3, b3 = 5;
    Grade  a4 = 7, b4 = 4;
    
    MySort(a1, b1);
    MySort(a2, b2);
    MySort(a3, b3);
    MySort(a4, b4);
    
    cout << "(a1, b1) : (" << a1 << ", " << b1 << ")" << endl
         << "(a2, b2) : (" << a2 << ", " << b2 << ")" << endl
         << "(a3, b3) : (" << a3 << ", " << b3 << ")" << endl
         << "(a4, b4) : (" << a4 << ", " << b4 << ")" << endl;
}

Grade::Grade(int v) {
    value = v;
}

ostream& operator<<(ostream& os, Grade g) {
    return os << g.value;
}

bool Grade::operator<(Grade g) { // 定義 operator< 成員函式, 用來比較兩個 Grade 物件
    return value < g.value;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/fc5bcaed7c93283f
(a1, b1) : (3, 5)
(a2, b2) : (4, 7)
(a3, b3) : (3, 5)
(a4, b4) : (4, 7)
*/