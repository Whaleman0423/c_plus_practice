#include <iostream>

using namespace std;

class Grade{};

// 設計一個 << 運算子函式，可以讓 Grade 類別用 cout 印出
ostream& operator<<(ostream&, const Grade&);

int main(){
    Grade g;
    cout << "g: " << g << endl;
    return 0;
}

ostream& operator<<(ostream& os, const Grade& g){
    os << 0;
    return os;
}