#include <iostream>

using namespace std;

class Grade{
    public:
        Grade();
        Grade(int v);
        const Grade operator+(const Grade& rhs) const; // 定義 + 運算子

        int value;
};

ostream& operator<<(ostream& os, const Grade& g);

int main(){
    Grade g1 = 37, g2 = 23;

    cout << "g1 + g2 = " << g1 + g2 << endl;
}

Grade::Grade(int v){
    value = v;
}

ostream& operator<<(ostream& os, const Grade& g){
    os << g.value;
    return os;
}

// 定義 + 運算子
const Grade Grade::operator+(const Grade& rhs) const{
    return value + rhs.value; // 會用 int 去初始化 Grade 物件（Grade(int v)）
}

