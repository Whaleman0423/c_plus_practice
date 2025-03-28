#include <iostream>

using namespace std;

class Grade{
    public:
        Grade();
        Grade(const Grade& g){ // 添加唯讀參考，使其可以接受唯讀物件的參考
            cout << "Grade::Grade(const Grade&)" << endl;
        }
};

int main(){
    const Grade g1;
    Grade g2(g1); // 讓複製初始化的初始值透過唯讀物件的參考方式傳入，使其更加泛用
    
    return 0;
}

Grade::Grade(){
    cout << "Grade::Grade()" << endl;
}