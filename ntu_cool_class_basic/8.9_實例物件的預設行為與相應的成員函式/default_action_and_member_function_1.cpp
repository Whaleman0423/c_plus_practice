#include <iostream>

using namespace std;

class T{};

int main(){
    T a;
    T b(a);
    T c = a;
    c = a;

    return 0;
}