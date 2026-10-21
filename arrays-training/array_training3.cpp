#include <iostream>
using namespace std;

int main() {
    int num[3];
    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }
    for (int i = 2; i >= 0; i--) {
        cout <<"Numbers entered inverted: "<<num[i]<<endl;
    }
    return 0;
}