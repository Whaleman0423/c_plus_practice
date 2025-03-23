#include <iostream>

using namespace std;

int operator+(int lhs, int rhs); // 編譯錯誤，不能對2個都是內建型態進行多載; 至少要有一個是自定義型態

int main(){
    int a = 1;
    int b = 2;
    int c = a + b;
    cout << "c: " << c << endl;
    return 0;
}

int operator+(int lhs, int rhs){
    return lhs + rhs;
}