#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;

    cout<<&x<<endl;
    cout<<ptr<<endl;

    *ptr += 5;

    (*ptr)++;

    cout<<x<<endl;
    cout<<*ptr<<endl; //dereferencing
    return 0;
}

//  & --> address of
//  * --> value of address