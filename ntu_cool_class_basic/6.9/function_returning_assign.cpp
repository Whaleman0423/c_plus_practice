#include <iostream>

using namespace std;


// case1
// int f(){
//     return 3;
// }

// case2
// int& g(){
//     // return 3; // 參考為左值參考，不能參考右值(3)
//     int x = 3;
//     return x;
// }

// case3
// int& h(int a ){
//     return a;
// }

// case4
int& j(int& a){
    return a;
}

int main(){
    // f() = 5; // case1. 會產生錯誤，函式的回傳值是暫時物件，暫時物件不能是左值
    // g() = 5; // case2. 未定義行為，函式結束後，靜態變數 x 會被銷毀

    // int a = 3;
    // h(a) = 5; // case3. 未定義行為，main 的 a 會用來初始化函式內的 a，回傳的 a 是函式內的 a
            
    // case4
    int a = 3;
    j(a) = 5; // f(a) = 5; 等同於 a = 5; f 的參數 a 與 main 傳入的 a 是同一個物件
    cout << "a: " << a << endl;
    j(j(a)) = 6;
    cout << "a: " << a << endl;

    return 0;
}