#include <iostream>
using namespace std;

void MySwap(int& a, int& b);
void MySwap(double& a, double& b);

int main() {
    int a = 3, b = 5;
    double c = 4.3, d = 3.2;

    cout << "(a, b): (" << a << ", " << b << ")" << endl
         << "(c, d): (" << c << ", " << d << ")" << endl;

    MySwap(a, b);
    MySwap(c, d);

    cout << "(a, b): (" << a << ", " << b << ")" << endl
         << "(c, d): (" << c << ", " << d << ")" << endl;

    return 0;
}

void MySwap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;  
}

void MySwap(double& a, double& b) {
    double t = a;
    a = b;
    b = t;
}