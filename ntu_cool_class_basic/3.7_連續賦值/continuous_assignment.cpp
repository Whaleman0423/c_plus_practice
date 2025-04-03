#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    // 連續賦值，等號賦值由右至左
    a = b = c = 9; // 從右邊開始，先將 9 賦值給 c，再將 c 賦值給 b，最後將 b 賦值給 a

    cout << "a: " << a << endl  // 9
         << "b: " << b << endl  // 9
         << "c: " << c << endl; // 9

    return 0;
}