#include <iostream>
using namespace std;

enum Color { Red=1, Green, Blue, Yellow };

int main() {
    int choice;
    cout << "Enter a number for color (1-Red, 2-Green, 3-Blue, 4-Yellow): ";
    cin >> choice;

    Color c = static_cast<Color>(choice);

    switch(c) {
        case Red: cout << "You selected Red"; break;
        case Green: cout << "You selected Green"; break;
        case Blue: cout << "You selected Blue"; break;
        case Yellow: cout << "You selected Yellow"; break;
        default: cout << "Invalid choice!";
    }
    return 0;
}
