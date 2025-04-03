#include <iostream>

namespace a{
    int b = 3;
}
using namespace a;

int b = 7;

int main(){
    int b = 5;  // removing this line may cause next line ambiguous error
    std::cout << b << std::endl; 
    
    std::cout << ::b << std::endl; // :: 會到全域找
    std::cout << a::b << std::endl;
    
    return 0;
}