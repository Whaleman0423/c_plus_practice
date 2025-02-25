#include <iostream>
using namespace std;

int main()
{
    // // case 1
    // int a = 3;
    // int b = a;
    // b = 5; // a 不會變
    // cout << "a: " << a << endl
    //      << "b: " << b << endl;

    // case 2，透過指標改變值
    int a = 3;
    int *b = &a;
    *b = 5; // a 會變，b = &a => *b = *(&a) = a = 5
    cout << "a: " << a << endl
         << "b: " << b << endl;

    return 0;
}