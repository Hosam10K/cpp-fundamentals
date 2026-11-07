#include <iostream>
using namespace std;

int main() {
    int number;
    int digit_count = 1;
    cout<<"please enter number: ";
    cin>>number;
    for (int x = 10; x < number; x = x*10){
        if (number >= x) {
            digit_count = digit_count + 1;
        }
    }
    cout<<"The number "<<number<<" has "<<digit_count<<" digit(s)"<<endl;
    
    return 0;
}