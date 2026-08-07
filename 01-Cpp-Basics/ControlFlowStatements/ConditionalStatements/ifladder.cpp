#include <iostream>
using namespace std;

int main() {
    int unit = 11;
    int bunit = 0;
    int amount = 0;
    int runit = unit;

    if (runit > 400) {
        bunit = runit - 400;
        amount += bunit * 13;
        runit -= bunit;
    }

    if (runit > 200) {
        bunit = runit - 200;
        amount += bunit * 8;
        runit -= bunit;
    }

    if (runit > 100) {
        bunit = runit - 100;
        amount += bunit * 6;
        runit -= bunit;
    }

    if (runit > 0) {
        bunit = runit;
        amount += bunit * 4.2;
    }

    cout << "Total bill = " << amount;

    return 0;
}