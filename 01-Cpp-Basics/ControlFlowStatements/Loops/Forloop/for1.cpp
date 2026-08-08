#include<iostream>
using namespace std;
//sum of n numbers
int main(){
    int n=6;
    int sum = 0;
    for (int i=1;i<=n;i++){
        sum += i;
    }
    cout<<sum;
    return 0;
}