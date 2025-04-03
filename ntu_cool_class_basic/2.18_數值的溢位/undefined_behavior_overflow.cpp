#include <iostream>
using namespace std;

int main()
{
    int a = 10000;

    cout << "sizeof(int): " << sizeof(int) << endl
         << "a * a: " << a * a << endl
         //  溢位對有號整數是 <未定義行為>
         << "a * a * a: " << a * a * a << endl;

    return 0;
}