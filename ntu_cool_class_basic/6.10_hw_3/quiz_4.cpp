/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

/* 讓更多型態可以交換 */

void MySwap(int&, int&);
void MySwap(double&, double&);
void MySwap(float&, float&);

int main() {
  int a = 1, b = 2;
  double c = 3.4, d = 5.6;
  float e = 7.8, f = 8.9;
  MySwap(a, b);
  MySwap(c, d);
  MySwap(e, f);

  cout << "a : " << a << endl
       << "b : " << b << endl
       << "c : " << c << endl
       << "d : " << d << endl
       << "e : " << e << endl
       << "f : " << f << endl;
  return 0;
}

void MySwap(int& a, int& b) {
  auto t = a;
  a = b;
  b = t;
}

void MySwap(double& a, double& b) {
  auto t = a;
  a = b;
  b = t;
}

void MySwap(float& a, float& b) {
  auto t = a;
  a = b;
  b = t;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/0affba2c55fe9258
a : 2
b : 1
c : 5.6
d : 3.4
e : 8.9
f : 7.8