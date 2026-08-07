#include <iostream>
using namespace std;
//sum of digits
int main() {
    int n=423;
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    cout<<sum;
    return 0;
}