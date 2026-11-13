#include <iostream>
using namespace std;

int main() {
    int number;
    int digit_count = 0;
    cout<<"please enter number: ";
    cin>>number;
    int original_number = number;
    while ( number > 0) {
        number = number / 10;
        digit_count++;
    }
    cout<<"The number "<<original_number<<" has "<<digit_count<<" digit(s)"<<endl;
    
    return 0;
}
