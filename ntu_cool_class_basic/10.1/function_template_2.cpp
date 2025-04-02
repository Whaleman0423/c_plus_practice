#include <iostream>
using namespace std;

// 另一種設計方式
void Assign3(int&);
void Assign5(int&);

int main() {
    int a = 0, b = 0;

    Assign3(a);
    Assign5(b);

    cout << "a: " << a << endl
         << "b: " << b << endl;

    return 0;
}

void Assign3(int& o) {
    o = 3;
}

void Assign5(int& o) {
    o = 5;
}
