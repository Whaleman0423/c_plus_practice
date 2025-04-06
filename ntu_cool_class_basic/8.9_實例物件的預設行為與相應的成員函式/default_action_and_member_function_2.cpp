#include <iostream>

using namespace std;

class T{
    public:
        T();
        T(const T&);
        ~T();
        T& operator=(const T&);
};

/* 成員函式只有宣告是不夠的 */

int main(){
    T a;
    T b(a);
    T c = a;
    c = a;

    return 0;
}