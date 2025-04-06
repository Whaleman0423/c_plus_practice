#include <iostream>

using namespace std;

class Grade{};

int main(){
    Grade g1;
    Grade g2 = g1;
    g2 = g1; // 複製賦值運算：複製賦值同型態物件到已有物件；又稱等號運算、複製運算

    return 0;
}