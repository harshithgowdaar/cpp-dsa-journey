#include <iostream>
using namespace std;
//pass by reference
void change(int *x){
    *x=100;
}
int main() {
    int x = 10;
    cout<<"Before calling: "<<x<<endl;
    change(&x);
    cout<<"After calling: "<<x<<endl;
    return 0;
}