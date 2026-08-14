#include <iostream>
using namespace std;

int main() {
    int x = 10,y=20;
    int *ptr1 = &x;
    int *ptr2 = &y;

    cout<<(*ptr1 == *ptr2)<<endl;

    if(*ptr1 == *ptr2){
        cout<<" x = y\n";
    } else if(*ptr1 > *ptr2){
        cout<<" x > y\n";
    } else if(*ptr1 < *ptr2){
        cout<<" x < y\n";
    }
    return 0;
}
