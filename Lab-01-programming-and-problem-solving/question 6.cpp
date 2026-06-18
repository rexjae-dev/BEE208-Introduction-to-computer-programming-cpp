#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char rex;

    cout << "Enter a character: ";
    cin >> rex;

    if (isupper(rex) && rex >= 'A' && rex <= 'Z')
        cout << "Uppercase letter";
    else
        cout << "Not an uppercase letter";

    return 0;
}
