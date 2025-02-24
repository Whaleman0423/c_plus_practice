#include <iostream>

int main(){
    // std::cout << "Hello world!";
    
    // std::cout << "Hello";
    // std::cout << "world!";
    
    // std::cout << "Hello\n";
    // std::cout << "world!";
    
    // std::cout << "Hello" "\n" "world!";
    
    // std::cout << "Hello" << "\n" << "world!";
    
    // std::cout << "Hello" << '\n' << "world!"; // 單引號只能放一個字元
    
    std::cout << "Hello" << std::endl << "world!"; // std::endl 會印換行字元並強制清初緩衝區(buffer)
    
    // std::cout << "Hello\nworld!";
    return 0;
    }