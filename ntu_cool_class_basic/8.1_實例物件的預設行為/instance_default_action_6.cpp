#include <iostream>

using namespace std;

class Grade{};

int main(){
    Grade g1;
    Grade g2 = g1;
    Grade& g3 = g2 = g1;

    // 對物件取位址
    cout << "&g1: " << &g1 << endl
         << "&g2: " << &g2 << endl
         << "&g3: " << &g3 << endl; // g3是g2的別名，所以位址相同

    // 物件至少需要佔據一個位元組

    return 0;
}