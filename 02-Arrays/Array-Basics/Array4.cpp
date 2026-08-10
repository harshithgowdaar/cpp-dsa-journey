//second max
#include <iostream>
using namespace std;

int main() {
    int arr[]={55,56,8,6,9};
    int max,secmax,size;
    size = sizeof(arr)/sizeof(arr[0]);
    max=INT64_MIN;
    secmax=INT64_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }else if(arr[i]>secmax){
            secmax=arr[i];
        }
    }
    cout<<"max="<<max<<'\n';
    cout<<"second max="<<secmax<<'\n';

    return 0;
}