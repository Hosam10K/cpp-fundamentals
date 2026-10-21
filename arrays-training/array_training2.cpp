#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;
    for (int i = 0; i < 5; i++){
        cin >> numbers[i];
        sum = sum + numbers[i];
    }
    double average = sum/5;
    cout<<"Sum of the numbers ="<<sum<<endl;
    cout<<"Average = "<<average<<endl;
}