#include <iostream>
using namespace std;
//prime or not
int main() {
    int n=12 , count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    cout<<(count==2? "Prime Number":"Not a Prime Number");
    return 0;
}