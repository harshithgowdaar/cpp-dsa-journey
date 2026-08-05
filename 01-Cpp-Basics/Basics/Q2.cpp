// Take two numbers from user and swap their values.

#include<iostream>
using namespace std;
int main(){
    int a = 10,b = 20;
    int c =a;
    a = b;
    b = c;
    cout << "a = " << a << '\n' <<"b = "<< b;
    return 0;
}