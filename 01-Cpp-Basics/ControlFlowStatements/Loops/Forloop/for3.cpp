#include <iostream>
using namespace std;
//factors of n
int main() {
    int n=13;
    int fact;
    for(int i=1;i<=n;i++){
        if (n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}