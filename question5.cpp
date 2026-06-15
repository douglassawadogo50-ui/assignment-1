#include <iostream>
using namespace std;

int main() {
    int val1, val2;
    cout << "Enter two integers: ";
    cin >> val1 >> val2;

    if (val1 > val2) {
        cout << "First value is greater\n";
    } else {
        cout << "Second value is greater\n";
    }

    return 0;
}
