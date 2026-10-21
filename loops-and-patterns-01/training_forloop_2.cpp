#include <iostream>
using namespace std;

int main () {
    int number;
    cout<<"Plz Enter Number"<<endl;
    cin>> number;
    for (int line = 1; line <= number; line++) {
        for (int star = (number+1) - line; star >= 1; star--) {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}