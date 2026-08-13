#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,8,7,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        bool isSwapped = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // int copy = arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1] = copy;
                swap(arr[j],arr[j+1]);
                isSwapped = true;
                
            }
        }
        if(!isSwapped) break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //enhance for loop
    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }

    return 0;
}