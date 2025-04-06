#include <stdio.h>

class OutputStream{
  public:
    void operator<<(const char* str){
      printf("%s", str);
    }

    // 讓 operator<< 可以接受多種型別（多載）
    void operator<<(int val){
      printf("%d", val);
    }
};

OutputStream myCout;

int main() {
  myCout << 3 + 5;
}
