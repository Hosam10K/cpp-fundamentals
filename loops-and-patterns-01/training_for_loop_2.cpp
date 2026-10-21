#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Plz enter Number"<<endl;
    cin>> num;

    if ( 1>num ||num>10 ) {
        cout<<"INVALID NUMBER"<<endl;
    }
    int line = num ;
   while ( line <= num && line > 0)
   {
    int star = line ;
    while ( star <= num && star > 0)
    {
        cout<<"x";
        --star;
    }
        cout<<endl;
        --line;
   }
    return 0;
    

}