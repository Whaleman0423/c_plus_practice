#include <iostream>

using namespace std;

int main(){
    cout << "Hello world!\n";
    
    int cout = 666;
    std::cout << cout << endl; // std :: 指定 namespace 的 cout
    ::cout << cout << endl; // :: 全域的 cout
    
    return 0;
}