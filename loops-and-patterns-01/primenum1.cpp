#include <iostream>
using namespace std;

int main() {
    bool prime = true;
    int number;
    cout<<"Number to check = ";
    cin>>number;
    for (int x = number-1; x > 1; x--) {
        if (number % x == 0) {
            prime = false;
            break;
        }
    }
if (prime == true) {
    cout<<number<<" is a prime number";
}
else {
    cout<<number<<" is not a prime number";
}
return 0;
}