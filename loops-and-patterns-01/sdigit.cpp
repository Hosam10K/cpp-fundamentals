#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    int digit_count = 1;
    cout<<"please enter number: ";
    cin>>number;
    int original_number = number;
    for (int d = 10; d < number; d = d*10){
        if (number >= d) {
            digit_count = digit_count + 1;
        }
    }
    for (int x = 0; x < digit_count; x++) {
        sum = sum + (number % 10);
        number= number / 10;
    }
    cout<<"The sum of all digits of "<<original_number<<" is "<<sum<<endl;

    return 0;
}
