#include <iostream>

using namespace std;

void operator<<(ostream&, int(&)[5]);

int main(){
    int a[5] = {3, 9, 1, 7, 2};

    cout << a; 
    
    return 0;
}

void operator<<(ostream& os, int(&v)[5]){
    os << '[' << v[0];
    for (int i = 1; i < 5; i++){
        os << ", " << v[i];
    }
    os << ']';
}