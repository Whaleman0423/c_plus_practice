/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

/* 對任意位數的整數進行分割 */

void SplitInteger(int);

int main() {
  SplitInteger(1234);
  SplitInteger(567890);
  return 0;
}

void SplitInteger(int input){
    while (input > 0){
        int remainder = input % 10;
        input /= 10;
        cout << remainder << ' ';
    }
    if (input <= 0){
        cout << endl;
    }
}

/* 預期結果： https://coliru.stacked-crooked.com/a/7ccd800286ea601a
4 3 2 1
0 9 8 7 6 5
*/