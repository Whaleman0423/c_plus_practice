#include <iostream>

using namespace std;

class Grade{};

int main(){
    Grade g1;
    Grade g2 = g1; // 複製初始化：將g1的值複製給g2，用同型態物件初始化新的物件
    return 0;
}