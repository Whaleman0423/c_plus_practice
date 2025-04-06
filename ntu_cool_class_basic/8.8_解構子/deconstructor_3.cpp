#include <iostream>
using namespace std;

class Grade{
    string name;
    public:
        Grade(string name) : name(name) {
            cout << "Grade::Grade() - " << name << endl;
        };
        ~Grade(){
            cout << "Grade::~Grade() - " << name << endl;
        };
};

int main(){
    Grade g1("g1");
    Grade g2("g2");
    // g2 會先呼叫解構子
    // 誰先建構，誰後解構。
    return 0; // C++ 規定：變數的解構順序 會反過來，也就是 後建構的會先解構。
    // 原因: 其實是為了保證資源的正確釋放順序，尤其當一個物件依賴另一個物件時。
}
