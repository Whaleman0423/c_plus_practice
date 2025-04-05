#include <iostream>
using namespace std;

int main() {
    int v[5] = {1, 2, 3, 4, 5};

    // for (auto p = begin(v); p != end(v); p++){
    for (int* p = &v[0]; p != &v[5]; p++){ // 等同於此行
        int n = *p;
        cout << n << " ";
    }

    return 0;
}