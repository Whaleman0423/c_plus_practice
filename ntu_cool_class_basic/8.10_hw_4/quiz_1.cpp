/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
#include <cmath>
using namespace std;

class Point {
 public:
  double Length();
  void Normalize();
  double x;
  double y;
};

double Point::Length() {
  return sqrt(x * x + y * y);
}

void Point::Normalize(){
    double length = Length();
    x /= length;
    y /= length;
}

void Normalize(Point& p) {
    double length = p.Length();
    p.x /= length;
    p.y /= length;
}

int main() {
  Point p = {3, 5}, q = {6, 4};
  Normalize(p);
  cout << "p: (" << p.x << ", " << p.y << "), " << p.Length() << endl;
  q.Normalize();
  cout << "q: (" << q.x << ", " << q.y << "), " << q.Length() << endl;
  return 0;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/cfd13b425aa2df1a
p: (0.514496, 0.857493), 1
q: (0.83205, 0.5547), 1
*/
