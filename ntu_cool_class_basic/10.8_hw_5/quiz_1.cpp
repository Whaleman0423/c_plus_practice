/* Ken-Yi Lee (feis.studio@gmail.com)> */
#include <stdio.h>

class OutputStream {
public:
    OutputStream& operator<<(const char* s) {
        printf("%s", s);
        return *this;
    }
    OutputStream& operator<<(int s) {
        printf("%d", s);
        return *this;
    }
    OutputStream& operator<<(double v) { // 多載 double 型別的 << 運算子
        printf("%f", v);
        return *this;
    }
};

OutputStream myCout;

const char* myEndl = "\n"; // 定義 myEndl 為指向常量字符串 "\n" 的指標，實際上是指向該字串第一個字元的記憶體地址

int main() {
    myCout << "3 + 5 == " << 3 + 5  << myEndl
           << "3 / 5 == " << 3 / 5. << myEndl;
    return 0;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/deefdc8c70f3a232
3 + 5 == 8
3 / 5 == 0.600000
*/