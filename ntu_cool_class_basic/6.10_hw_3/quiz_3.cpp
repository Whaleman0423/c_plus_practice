/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>

/* 讓 Print 可以印出更多型態 */

void Print(const char*);
void Print(char);
void Print(int);
void Print(double);

int main() {
    Print("Hello");
    Print('\n');
    Print(4);
    Print('\n');
    Print(8.7);
    return 0;
}

void Print(const char* str) {
    std::cout << str;
}

void Print(char ch) {
    std::cout << ch;
}

void Print(int i) {
    std::cout << i;
}

void Print(double d) {
    std::cout << d;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/a0754f61af98f700
Hello
4
8.7
*/