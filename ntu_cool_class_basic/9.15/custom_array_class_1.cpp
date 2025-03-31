#include <iostream>
using namespace std;

/* 編譯錯誤範例 */

class IntArray{ // 定義一種用起來像陣列的類別
};

int main() {
    IntArray a;
    cout << "a: " << a << endl; // 我們想讓 cout  可以輸出 IntArray 的實例物件
    // 假定是個長度為 5 的陣列, 預期行為要是什麼？ a: [0, 0, 0, 0, 0]
    return 0;
}