//sum of diagonal elements of a matrix
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter size of the matrix: \n";
    cin>>a;
    cin>>b;
    int matrix[a][b];

    cout<<"Enter "<< a*b <<" elements: \n";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int ele;
            cin>>ele;
            matrix[i][j] = ele;
        }
    }

    int sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==j ||(i+j)==b-1){
                sum += matrix[i][j];
            }
        }
    }
    cout<<"sum of diagonal elements = " << sum;
    return 0;
}