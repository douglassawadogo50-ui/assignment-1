#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (input == "hello") {
        cout << "Hello!\n";
    } else {
        cout << "Goodbye!\n";
    }

    return 0;
}
