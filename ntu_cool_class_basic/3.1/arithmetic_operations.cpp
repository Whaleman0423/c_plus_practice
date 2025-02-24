#include <iostream>

using namespace std;

int main()
{
    int a = 1234;

    cout << a / 1 % 10 << endl     // 4
         << a / 10 % 10 << endl    // 3
         << a / 100 % 10 << endl   // 2
         << a / 1000 % 10 << endl; // 1

    return 0;
}