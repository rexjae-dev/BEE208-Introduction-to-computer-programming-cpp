#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    int larger = (a > b) ? a : b;

    cout << "Larger number = " << larger;

    return 0;
}
