#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 5;
    // int a = 3, b = 5;

    // // case 1
    // if (a > b)
    // {
    //     cout << "Max: " << a;
    // }
    // if (a < b)
    // {
    //     cout << "Max: " << b;
    // }

    // // case 2
    // if (a > b)
    // {
    //     cout << "Max: " << a;
    // }
    // else
    // {
    //     cout << "Max: " << b;
    // }

    // case 3
    auto max = a;
    if (b > max)
    {
        max = b;
    }
    cout << "Max: " << max << endl;

    return 0;
}