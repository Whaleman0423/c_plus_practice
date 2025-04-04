 #include <iostream>

 using namespace std;

 int main(){
    char *str = "Hello\nworld!"; // 雙引號也可以直接初始化一個字元指標，系統會自動將字串轉換成字元指標
    const char *str2 = "Hello\nworld!"; // 為了避免修改字串內容，可以額外用 const 修飾

    cout << str << endl;
    cout << str2 << endl;

    cout << str[0] << endl;
    str[0] = 'h'; // 未定義行為，此時 C 風格字串內容是唯讀的，不能夠修改
    cout << str[0] << endl;

    str2[0] = 'h'; // 為了避免未定義行為，str2 用 const 修飾，確保不能夠修改
    cout << str2[0] << endl;

    return 0;
 }