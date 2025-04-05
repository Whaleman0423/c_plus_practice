/* Ken-Yi Lee (feis.studio@gmail.com) */
#include <iostream>
#include <iomanip>
using namespace std;

class Timer {
public:
    Timer(); // 宣告建構子
    void Tick() {
        counter++;
    }
    void Reset() {
        counter = 1;
    }
    int counter;
};

int main() {
    Timer timer;
    for (int i = 1; i <= 8; i++) {
        if (i == 4) {
            timer.Reset();
        }
        cout << timer.counter << endl;
        timer.Tick();
    }
    return 0;
}

Timer::Timer() { // 定義建構子
    counter = 1;
}

/* 預期結果： https://coliru.stacked-crooked.com/a/6b481ad29ee1ef29
1
2
3
1
2
3
4
5
*/