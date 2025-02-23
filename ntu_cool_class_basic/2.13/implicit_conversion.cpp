#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 3, c = 3;
    
    cout << (a + b + c) / 3 << endl;
    cout << (a + b + c) / 3. << endl; // 發生隱性轉型
    return 0;
}