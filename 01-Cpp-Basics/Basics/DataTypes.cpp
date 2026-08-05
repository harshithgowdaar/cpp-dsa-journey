//Data types are 3 types in C++: Primitive, Derived, User-defined
/*Basic data types are 
int,
float,
double,
char, 
bool,
void */

#include <iostream>
using namespace std;

int main() {
    int i = 10; // integer data type
    float f = 3.14; // floating-point data type
    double d = 3.14159; // double-precision floating-point data type
    char c = 'A'; // character data type
    bool b = true; // boolean data type
    cout << "Integer: " << i << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << b << endl;
    return 0;
}


/*Garbage value -> when the variable is declared but does not assigned
 any value then in the output it gives a random value 
 it is called garbage value*/ 
