#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch) && isupper(ch)) {
        cout << "Uppercase letter\n";
    } else {
        cout << "Not an uppercase letter\n";
    }

    return 0;
}
