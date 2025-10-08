#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    Complex add(const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex c1, c2, result;
    c1.getData();
    c2.getData();
    result = c1.add(c2);
    cout << "Sum: ";
    result.display();
    return 0;
}