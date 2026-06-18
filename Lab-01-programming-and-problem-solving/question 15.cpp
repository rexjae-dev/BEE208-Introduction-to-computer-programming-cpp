#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, rem;

    cout << "Enter a binary number: ";
    cin >> binary;

    int temp = binary;

    while (temp > 0) {
        rem = temp % 10;
        decimal += rem * base;
        temp /= 10;
        base *= 2;
    }

    cout << "Decimal = " << decimal << endl;
    cout << "Octal = " << oct << decimal << endl;
    cout << "Hexadecimal = " << hex << decimal << endl;

    return 0;
}
