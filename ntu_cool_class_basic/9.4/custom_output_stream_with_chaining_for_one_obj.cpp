#include <stdio.h>

class OutputStream{
  public:
    OutputStream& operator<<(const char* str){ // 改成回傳自己
      printf("%s", str);
      return *this;
    }

    OutputStream& operator<<(int val){
      printf("%d", val);
      return *this;
    }
};

OutputStream myCout;

int main() {
  myCout << "3 + 5 == " << 3 + 5;
}
