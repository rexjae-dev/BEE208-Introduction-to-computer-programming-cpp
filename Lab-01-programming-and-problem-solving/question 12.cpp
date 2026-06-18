#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Enter first floating-point number: ";
    cin >> a; 
    cout << "Enter second floating-point number:";
    cin >> b;

    float larger = (a > b) ? a : b;

    cout << "Larger number = " << larger;

    return 0;
}
