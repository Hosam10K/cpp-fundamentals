#include <iostream>
using namespace std;

int main() {
    int number;
 cout<<"Plz Enter Number"<<endl;
 cin >> number;
for (int star = 1; star <= number; star++) {
    for ( int line = 1; star >= line; line++) {
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}