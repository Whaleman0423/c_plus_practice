#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    cout << "a addresss: " << &a << endl;

    // 取 a 的位子
    int *b = &a;
    cout << "b addresss: " << b << endl;

    // 取位子的位子
    int **c = &b;
    cout << "c addresss: " << c << endl;

    // int **d = &&a; // error，因為 a 沒有被明確定義

    int e = *b;                 // b = &a => *(&a) = a
    cout << "e: " << e << endl; // 3

    int f = **c;                // 因 c = &b => *c = *(&b) = b, b = &a => *b = a
    cout << "f: " << f << endl; // 3

    return 0;
}