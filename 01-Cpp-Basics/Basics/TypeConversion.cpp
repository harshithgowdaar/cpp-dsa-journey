#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double d = a;  // automatic -> implicit type conversion
    int n1 = 15, n2 = 2;
    double ans = (double)n1/n2; // double/int
    cout << ans <<endl;

    int ch = 'A';
    cout << ch << endl;
    return 0;
}