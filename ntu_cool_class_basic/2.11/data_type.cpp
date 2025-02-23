#include <iostream>
using namespace std;

int main(){
    int a = 3;
    double b = 3.2;
    char c = '3';
    bool d = true;
    
    cout << "Integer: " << a << endl
         << "Floating-point number: " << b << endl
         << "Character: " << c << endl
         << "Boolean: " << d << endl // 1
         << "Original Boolean: " << boolalpha << d << endl;
        
    return 0;
}