#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Equal\n";
    } else {
        cout << "Not equal\n";
    }

    return 0;
}
