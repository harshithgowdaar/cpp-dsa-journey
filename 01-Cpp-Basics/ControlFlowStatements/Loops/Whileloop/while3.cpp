#include <iostream>
#include <cmath>
using namespace std;
//armstrong number
int main() {
    int n=143;
    int copy=n;
    int c=0;
    int last=0;
    int sum = 0;
    while(n>0){
        c++;
        n /= 10;
    }
    n=copy;
    while(n>0){
        last = n%10;
        sum += pow(last,3);
        n /= 10;
    }
    cout<<(sum==copy ? "armstrong number" : "not an armstrong number");
    return 0;
}