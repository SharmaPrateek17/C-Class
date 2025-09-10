#include <iostream>
using namespace std;

int main() {
    int decimal, binary[32], i = 0;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal;

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // store remainder (0 or 1)
        num = num / 2;        // divide by 2
        i++;
    }

    cout << "Binary equivalent of " << decimal << " is: ";

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    cout << endl;
    return 0;
}