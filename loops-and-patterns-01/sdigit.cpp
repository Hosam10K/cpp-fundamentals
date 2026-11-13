#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    int digit_count = 0;
    cout<<"please enter number: ";
    cin>>number;
    int original_number = number;
   while ( number > 0) {
    sum = sum + (number % 10);
    number = number / 10;
    digit_count++;
   }
    cout<<"__________________________________"<<endl;
    cout<<"The sum of all digits of "<<original_number<<" is "<<sum<<endl;

    return 0;
}
