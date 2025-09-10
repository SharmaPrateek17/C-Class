#include <iostream>
using namespace std;

int main() {
    int num, largest;

    cout << "Enter 10 numbers: ";

    // Take first number as largest initially
    cin >> largest;

    // Loop for remaining 9 numbers
    for (int i = 1; i < 10; i++) {
        cin >> num;

        // Ternary operator to update largest
        largest = (num > largest) ? num : largest;
    }

    cout << "The largest number is: " << largest << endl;
    return 0;
}
