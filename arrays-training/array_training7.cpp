#include <iostream>
using namespace std;

int main() {
    int numbers[4];
    bool founded = false;
    for (int i = 0; i < 4; i++) {
        cin >> numbers[i];
    }
    int searching_num;
    cout<<"plz enter a number to search"<<endl;
    cin >> searching_num;
    cout<<"***************"<<endl;
    for (int s = 0; s < 4; s++) {
        if (searching_num == numbers[s]) {
            cout << s <<endl;
            founded = true;
            break;
        }
    }
    if (founded == false)
        cout<<"Not Found"<<endl;
    return 0;
    }
