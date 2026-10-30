#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number[10];
    for (int i = 0; i < 10; i++) {
        cout<<"Please Enter Number: ";
        cin>> number[i];
    }
    int i = 0;
    int storage[5];
    int c = 0;
    for (int x = 9; x >= 5; x--) {
        storage[c] = number[x];
        number[x] = number[i];
        number[i] = storage[c];
        i++;
        c++;
    }
    for (int d = 0; d < 10; d++) {
        cout<<number[d]<<" ";
    }
return 0;
}