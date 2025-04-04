/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
using namespace std;

class Grade {
  public:
    Grade();
    Grade(int v);
    int value;

    bool operator>=(const Grade& g) const; // 宣告 成員函式 >= 運算子
    bool operator<(const Grade& g) const; // 宣告 成員函式 < 運算子
};

ostream& operator<<(ostream&, const Grade&);

int main() {
  const Grade gs[5] = { 80, 60, 59, 90, 40};
  
  cout << "PASS: ";
  for (const auto& g : gs) {
      if (g >= 60) {
         cout << " " << g;
      }
  }
  cout << endl;
  
  cout << "FAIL: ";
  for (const auto& g : gs) {
      if (g < 60) {
         cout << " " << g;
      }
  }
  cout << endl;
}

ostream& operator<<(ostream& os, const Grade& g) {
  os << g.value;
  return os;
}

Grade::Grade() {
  value = 0;
}

Grade::Grade(int v) {
  if (v < 0) {
    v = 0;
  } else if (v > 100) {
    v = 100;
  }
  value = v;
}

bool Grade::operator>=(const Grade& g) const{ // 定義 成員函式 >= 運算子
    return value >= g.value;
}

bool Grade::operator<(const Grade& g) const{ // 定義 成員函式 < 運算子
    return value < g.value;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/6bb9cef70b100cae
PASS:  80 60 90
FAIL:  59 40
*/