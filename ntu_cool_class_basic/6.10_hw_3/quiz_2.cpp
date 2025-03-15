/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

/* 對兩個數字由小到大排序 */

void MySort(int& x, int& y);

int main() {
  int a = 3, b = 5;
  int c = 9, d = 2;
  MySort(a, b);
  MySort(c, d);
  cout << "a : " << a << endl
       << "b : " << b << endl
       << "c : " << c << endl
       << "d : " << d << endl;
  return 0;
}

void MySort(int& x, int& y){
    if (x > y){
      int  min = y; 
        y = x;
        x = min;
    }
}

/* 預期結果： https://coliru.stacked-crooked.com/a/e68079ce85fd8300
a : 3
b : 5
c : 2
d : 9
*/