#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    a = b = c = 1;

    cout << (a == b == c) << endl; // 1, 因隱性轉型 true -> 1

    return 0;
}