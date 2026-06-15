#include <iostream>
#include <string>

using namespace std;

int main() {
    string binaryStr;
    cout << "Enter a binary number: ";
    cin >> binaryStr;

    int decimalValue = stoi(binaryStr, nullptr, 2);

    cout << "The decimal equivalent is: " << decimalValue << "\n";

    return 0;
}

