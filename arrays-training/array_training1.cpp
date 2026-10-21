#include <iostream>
using namespace std;

int main() {
    int numbers[4];
    cin >> numbers[0];
    int bigger = numbers[0];
    int smaller = numbers[0];
    for (int i = 1; i < 4; i++ ) {
        cin >> numbers[i];
       
        if (bigger < numbers[i] ) {
            bigger = numbers[i];
        }
        if (smaller > numbers[i]) {
            smaller = numbers [i];
        }
    }
    cout <<"Bigger Number is: "<< bigger <<endl;
    cout <<"Smaller Number is: "<< smaller <<endl;

    return 0;
}