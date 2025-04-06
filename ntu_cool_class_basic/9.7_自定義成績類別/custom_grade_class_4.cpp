#include <iostream>

using namespace std;

/* 編譯錯誤範例  */

class Grade{
    public:
        Grade(int v); // 如果有定義建構子，編譯器不會自動生成預設建構子
        int value;
};

ostream& operator<<(ostream&, const Grade&);

int main(){
    Grade g; // 編譯錯誤，因為沒有預設建構子
    cout << "g: " << g << endl;

    return 0;
}

Grade::Grade(int v){
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g){
    os << g.value;
    return os;
}