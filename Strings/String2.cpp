#include <iostream>
#include <cstring>
using namespace std;

int main() {
    //C style
    char str[10];
    
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"string is: "<<str<<endl;

    // int size = 0;
    // for(int i=0;str[i]!='\0';i++){
    //     size++;
    // }
    cout<<"Size : "<<strlen(str)<<endl;
    return 0;
}

//String functions
// strlen()
// strcpy()
// strcat()
//strcmp()