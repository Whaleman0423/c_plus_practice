#include <iostream>
using namespace std;

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    // for (int n : v){ 
    //     cout << n << " ";
    // }

    // 上面的迴圈語法是語法糖(比較簡單的寫法)，實際上等同於下面的語法：
    for (auto p = begin(v); p != end(v); p++){
        int n = *p;
        cout << n << " ";
    }

    cout << endl;
    cout << "begin(v) == " << begin(v) << endl
         << "end(v) == " << end(v) << endl;

    cout << "begin(v) value == " << *begin(v) << endl
         << "end(v) value == " << *end(v) << endl; // 未定義行為，因為實際上陣列沒有這個元素，超出長度

    /*
    範圍型的迴圈語法其實就是像這樣使用 begin() 和 end() 的語法糖
    如果對 C風格陣列使用 begin() 和 end()，會得到指向第一個與最後一個的下一個陣列元素指標
    begin(v) == &v[0]
    end(v) == &v[5]
    */

    return 0;
}