#include <stdio.h>

class OutputStream{
  public:
    void operator<<(const char* str){
      printf("%s", str);
    }
};

OutputStream myCout;

int main() {
  myCout << "3 + 5 == ";
}
