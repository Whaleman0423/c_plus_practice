#include <iostream>
using namespace std;

int main()
{
    // // case1
    // int a = 3;
    // int b = a;
    // b = 5;
    // cout << "a: " << a << endl
    //      << "b: " << b << endl;

    // case2
    int a = 3;
    int &b = a;
    b = 5;
    cout << "a: " << a << endl
         << "b: " << b << endl;

    return 0;
}