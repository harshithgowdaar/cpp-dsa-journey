#include <iostream>
using namespace std;

void change(int *x , int y){
    *x = 100;
    y = 200;
}
int main() {
    int x=10;
    int y=20;
    cout<<"Before call: "<<x<<' '<<y<<endl;
    change(&x,y);
    cout<<"After call: "<<x<<' '<<y<<endl;
    return 0;
}