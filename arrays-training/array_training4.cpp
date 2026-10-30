#include <iostream>
using namespace std;

int main () {
    int numbers[3];
    int copy_numbers[3];
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }
    for(int n = 0; n < 3; n++) {
        copy_numbers[n] = numbers[n];
    }
     return 0;   
}