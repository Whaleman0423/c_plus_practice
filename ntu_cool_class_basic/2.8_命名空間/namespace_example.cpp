#include <iostream>

namespace a {
    int b = 3;
}

int b = 5;

int main(){
    int b = 7;
    {
        int b = 9;    
    }

    std::cout << "a::b：" << a::b << std::endl // 3
              << "b   ：" << b    << std::endl // 7
              << "::b ：" << ::b  << std::endl; // 5
              
    return 0;
}