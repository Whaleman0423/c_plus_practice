#include <iostream>
using namespace std;

// 名稱遮蔽問題

int i = 1;
int main(){
    cout << i; // i: 1
    
    int i = 2;
    cout << i; // i: 2
    
    {
        cout << i; // i: 2
        
        int i = 3;
        cout << i; // i: 3
    }
    
    cout << i; // i: 2
}
