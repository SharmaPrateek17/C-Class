#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Enter first complex number (real and imaginary): ";
    cin >> c1.real >> c1.imag;

    cout << "Enter second complex number (real and imaginary): ";
    cin >> c2.real >> c2.imag;

    // Addition
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Subtraction
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    cout << "\nFirst complex number: " << c1.real << " + " << c1.imag << "i" << endl;
    cout << "Second complex number: " << c2.real << " + " << c2.imag << "i" << endl;

    cout << "\nSum: " << sum.real << " + " << sum.imag << "i" << endl;
    cout << "Difference: " << diff.real << " + " << diff.imag << "i" << endl;

    return 0;
}