#include <iostream>

using namespace std;

class Grade{}; // 加上大括號即代表有定義，即便內部沒有任何定義，這樣就成正確通過編譯

int main(){
    Grade g1; // 預設初始化：沒給初始值的情況下產生物件
    return 0;
}