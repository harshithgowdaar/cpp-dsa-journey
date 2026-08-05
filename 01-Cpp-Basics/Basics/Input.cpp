#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int age;
    
    cout << "enter your age: ";
    cin >> age;
    cout<<"enter your name: ";
    cin.ignore(); // ingnores the value which is stored by pressing the enter int buffer
    getline(cin, name);  // to take owl line or more than one word as input
    cout << name << " is " << age << " years old." << endl;
    return 0;
}