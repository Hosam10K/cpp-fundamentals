#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int num;
    cout<<"Number to Check = ";
    cin>>num;
    int place = 0;
    int print_num = num;
    while ( num != 0) {
        numbers[place] = num % 10;
        num = num / 10;
        place++;
        
    }
    place = place - 1;
    bool palindrome = true;
    int y = 0;
    for ( int x = place; x >= 0; x--) {
        if ( numbers[x] != numbers[y] ) {
            palindrome = false;
            break;
        }
        if ( x == y) {
        break;
        }
        y++;
    }
    if (palindrome == true) {
        cout<<print_num<<" is  a palindrome number."<<endl;
    }
    else {
        cout<<print_num<<" is not a palindrome number."<<endl;
    }
    return 0;
}
