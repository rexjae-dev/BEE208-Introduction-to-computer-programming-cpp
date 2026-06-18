#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "\nSum = " << num1 + num2 << endl;
    cout << "Difference = " << num1 - num2 << endl;
    cout << "Product = " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Quotient = " << (float)num1 / num2 << endl;
    } else {
        cout << "Quotient = Undefined (cannot divide by zero)" << endl;
    }

    return 0;
}
