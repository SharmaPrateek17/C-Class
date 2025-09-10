#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    // Allocate memory dynamically for the new string
    char* copy = new char[strlen(input) + 1];

    // Copy the string
    strcpy(copy, input);

    cout << "Copied string: " << copy << endl;

    // Free the allocated memory
    delete[] copy;
    return 0;
}