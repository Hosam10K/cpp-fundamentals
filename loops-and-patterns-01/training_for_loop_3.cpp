#include <iostream>
using namespace std;

int main () {
    int num;
    cout <<"Plz enter a number"<<endl;
    cin >> num;
    // validate that the number enterd by the user is not out of range
    if ( num < 1 || num > 10) {
        cout <<"Error"<<endl;
        return 0;
    }
    int line = 1;
    // Helps to print lines till the number entered by the user
    while ( line <=num ) 
    {
        int spaces = num - line;
        while ( spaces > 0)
        {
            cout<<" ";
            --spaces;
        }
        // Draw number of stars = line.
        int star = 1;
        while (star <= line ){
            cout<<"*";
            ++star;
        }
        // to go to the next line after finish printing stars in the cuurent line
        cout<<endl;
        ++line;
    }
    return 0;
}