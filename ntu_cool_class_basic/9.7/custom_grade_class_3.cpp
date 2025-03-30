#include <iostream>

using namespace std;

class Grade{
    public:
        Grade(int v);
        
        // 新增一個資料成員變數來儲存物件的「狀態」
        int value;
};

ostream& operator<<(ostream&, const Grade&);

int main(){
    Grade g(37);
    Grade g2 = 26; // 等於 Grade g2(26);
    cout << "g: " << g << endl;
    cout << "g2: " << g2 << endl;
    return 0;
}

// 設計一個建構子，可以讓 Grade 類別用 int 初始化
Grade::Grade(int v){
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g){
    os << g.value;
    return os;
}