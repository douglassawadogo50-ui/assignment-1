#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if ((num % 2 != 0) && (num % 3 == 0)) {
        cout << num << " is odd and divisible by 3.\n";
    } else {
        cout << num << " does not meet both conditions.\n";
    }

    return 0;
}
