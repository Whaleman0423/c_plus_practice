#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[13] = "Hello\nworld!"; // 需 +1 因為字串陣列結尾會有 \0

    cout << str << endl;
    cout << str[0] << endl;

    cout << strlen(str) << endl;
    
    
    return 0;
}