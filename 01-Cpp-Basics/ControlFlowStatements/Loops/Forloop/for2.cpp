#include <iostream>
using namespace std;
//factorial
int main() {
    int n = 3;
    int fact = 1;
    for(int i=n;i>=1;i--){
        fact *= i;
    }
    cout<<fact;
    return 0;
}