#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = (rand()%10) +1;
    int guess;
    do{
        cout << "Guess the number: ";
        cin >> guess;
        if (guess == num){
            cout<<"your guess is correct...\n";
        } else if(guess != num){
            cout<<"incorrect guess!!! Try again...\n";
        }
    } while (guess != num);
    
}
