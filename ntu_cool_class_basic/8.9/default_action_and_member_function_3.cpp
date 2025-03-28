#include <iostream>

using namespace std;

class T{
    public:
        T() = default;
        T(const T&) = default;
        ~T() = default;
        T& operator=(const T&) = default;
};

int main(){
    T a;
    T b(a);
    T c = a;
    c = a;

    return 0;
}