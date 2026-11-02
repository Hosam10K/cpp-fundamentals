#include <iostream>
using namespace std;

int main () {
    int num[10];
    cout<<"Please enter 10 Numbers"<<endl;
    for (int i = 0; i < 10; i++) {
        cin>>num[i];
    }
    int searching_num;
    int founded_counter = 0;
    cout<<"Please Enter the Number you want to search for"<<endl;
    cin>>searching_num;
    for (int c = 0; c < 10; c++) {
        if (searching_num == num[c]) {
            founded_counter++;
        }
    }
    string time = "times";
    if (founded_counter == 1) {
        time = "time";
    }
    if (founded_counter >= 1) {
        cout<<"Number you entered are founded: "<<founded_counter<<" "<<time <<endl;
    }
    else {
        cout<<"The Number u have entered are not found"<<endl;
    }
    return 0;
}