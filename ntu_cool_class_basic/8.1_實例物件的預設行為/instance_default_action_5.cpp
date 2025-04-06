#include <iostream>

using namespace std;

class Grade{};

int main(){
    Grade g1;
    Grade g2 = g1;
    Grade& g3 = g2 = g1; // 右邊的等號是複製賦值運算；左邊是參考初始化，參考同型態物件；參考不會產生新的物件

    return 0;
}