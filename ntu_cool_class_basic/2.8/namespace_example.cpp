#include <iostream>

namespace a {
    int b = 3;
}

int b = 5;

int main(){

    std::cout << "a::b：" << a::b << std::endl // 3
              << "b   ：" << b    << std::endl // 5
              << "::b ：" << ::b  << std::endl; // 5
              
    return 0;
}