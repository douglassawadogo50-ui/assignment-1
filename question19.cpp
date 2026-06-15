#include <iostream>
#include <string>

using namespace std;

int main() {
    string binaryStr;
    int choice;

    cout << "--- Binary Conversion Calculator ---\n";
    cout << "Enter a binary number: ";
    cin >> binaryStr;

    unsigned long long decimalValue = stoull(binaryStr, nullptr, 2);

    cout << "\nSelect the conversion type:\n";
    cout << "1. Convert to Decimal\n";
    cout << "2. Convert to Hexadecimal\n";
    cout << "3. Convert to Octadecimal\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Decimal: " << decimalValue << "\n";
            break;
        case 2:
            cout << hex << uppercase << "Hexadecimal: " << decimalValue << "\n";
            break;
        case 3:
            cout << oct << "Octadecimal: " << decimalValue << "\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
