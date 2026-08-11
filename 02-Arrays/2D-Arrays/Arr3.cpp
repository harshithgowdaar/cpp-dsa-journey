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

    int max=matrix[0][0];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
    }
    cout<<"Max: "<<max;
    return 0;
}