#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int t=5;
    int ans=-1;
    while(s<=e){
        int mid= (s+e)/2;
        if(arr[mid]==t){
            ans = mid;
            break;
        } else if(arr[mid] < t){
            s=mid+1;
        } else if(arr[mid]>t){
            e=mid-1;
        }
    }
    cout<<"index of "<<t<<" is: "<<ans;
    return 0;
}

//used only when array is in sorted order