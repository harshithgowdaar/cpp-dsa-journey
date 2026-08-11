#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int t=17;
    int n=sizeof(arr)/sizeof(arr[0]);

    int ans = -1;
    for(int i=0;i<n;i++) {
        if(arr[i]==t){
            ans = i;
            break;
        }
    }
    cout<<ans;
    return 0;
}