#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 5;

    // // case 1
    // int m;
    // if (a > b)
    // {
    //     m = a;
    // }
    // else
    // {
    //     m = b;
    // }

    // case 2
    int m = a > b ? a : b;

    cout << "Max: " << m << endl;

    return 0;
}