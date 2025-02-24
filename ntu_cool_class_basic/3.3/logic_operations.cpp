#include <iostream>
using namespace std;

int main()
{
    cout << (3 > 2 && 2 > 3) << endl // 0
         << (3 > 2 || 2 > 3) << endl // 1
         << !(3 > 2) << endl;        // 0

    return 0;
}