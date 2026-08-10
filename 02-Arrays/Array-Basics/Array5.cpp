//acending order
#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,4,9,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int isSorted=1;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            isSorted=0;
            break;
        }
    }
    cout<< ((isSorted == 1)? "The array is sorted":"The array is not sorted");
    return 0;
}