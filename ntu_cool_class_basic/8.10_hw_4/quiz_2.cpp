/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
#include <cmath>
using namespace std;

class Point {
 public:
  int x;
  int y;
  Point operator+(Point rhs) {
    return {x + rhs.x, y + rhs.y}; // C++11
  }
  Point operator-(Point rhs) {
    return {x - rhs.x, y - rhs.y}; // C++11
  }
};


int main() {
  Point p = {3, 5};
  Point q = {6, 4};
  Point r = p + q - p;
  cout << "r : (" << r.x << ", " << r.y << ")" << endl;
  return 0;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/ad3f7e7bf5d244a7
r : (6, 4)
*/