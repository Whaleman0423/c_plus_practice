#include <iostream>

using namespace std;

// 0. 只有定義帶有 int& 的 MySwap 函式
void MySwap(int& a, int& b);

// 2. 需要額外再定義帶有 double& 的 MySwap 函式
void MySwap(double& a, double& b);

int main(){
    int a = 1, b = 2;
    double c = 3.4, d = 5.6;

    MySwap(a, b);
    
    // 1. double 物件雖然可以隱性轉型為 int 物件；
    // 但這種隱性轉型是產生暫時物件，左值參考無法參考暫時物件
    MySwap(c, d); // 這樣會報錯

    cout << "(a, b): (" << a << ", " << b << ")" << endl
         << "(c, d): (" << c << ", " << d << ")" << endl;

    return 0;
}

void MySwap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void MySwap(double& a, double& b){
    double temp = a;
    a = b;
    b = temp;
}
