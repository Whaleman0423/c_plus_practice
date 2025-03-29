#include <stdio.h>

class OutputStream{
  public:
    OutputStream operator<<(const char* str){
      printf("%s", str);
      return OutputStream();
    }

    OutputStream operator<<(int val){
      printf("%d", val);
      return OutputStream();
    }
};

OutputStream myCout;

int main() {
  myCout << "3 + 5 == " << 3 + 5; // << 由左到右執行
  myCout << "\n";
  myCout << 3 + 5 << " == 3 + 5"; 
}
