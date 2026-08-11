#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];
    cout<<"Enter "<<2*3<<" elements of matrix: \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            int n;
            cin>>n;
            matrix[i][j]=n;
        }
    }

    cout<<"Matrix is: \n";

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}