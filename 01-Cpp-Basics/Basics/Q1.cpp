// Take three numbers as input and print their average.
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;
    cout << "enter third number: ";
    cin >> c;
    double avg = (double)(a+b+c)/3;
    cout << "average = " << avg << '\n';
    return 0;
}