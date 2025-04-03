#include <iostream>

using namespace std;

int main()
{
    int a = 1234;

    int m = 1;
    cout << a / m % 10 << endl; // 4

    m *= 10;
    cout << a / m % 10 << endl; // 3

    m *= 10;
    cout << a / m % 10 << endl; // 2

    m *= 10;
    cout << a / m % 10 << endl; // 1

    return 0;
}