/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

template<typename T, int N> // 用模板參數 T 決定元素的資料型態, 用模板參數 N 決定陣列的大小
void MySort(T (&v)[N]){
    for (int k = 1; k <= N; k++){
        for (int i = 0; i < N-k; i++){
            if (v[i] < v[i+1]){
                continue;
            }
            swap(v[i], v[i+1]);
        }
    }
}

template<typename T, int N, typename = enable_if_t<!is_same<T, const char>::value>>
ostream& operator<<(ostream& os, T (&v)[N]) {
    if (N == 0) {
        return os << "[]";
    }
    os << "[" << v[0];
    for (int i = 1; i < N; i++) {
        cout << ", " << v[i];
    }
    return os << "]";
}

int main() {
    int    a[3] = {7, 3, 5};
    int    b[5] = {7, 3, 5, 9, 2};    
    double c[5] = {3.1, 7.5, 4.0, 9.7, 2.5};

    MySort(a);
    MySort(b);
    MySort(c);
    
    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/3303f9bbe31623a5
a: [3, 5, 7]
b: [2, 3, 5, 7, 9]
c: [2.5, 3.1, 4, 7.5, 9.7]
*/