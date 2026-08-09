#include <iostream>
using namespace std;

//function declaration
void print();
int sum(int a,int b);

//function definition
void print(){
    cout<<"Hello everyone\n";
}

int main() {
    //function call
    print();
    cout << "How are you\n";
    cout<<"sum = "<<sum(10,20);
    return 0;
}

//function declaration
int sum(int a,int b){
    return a+b;
}