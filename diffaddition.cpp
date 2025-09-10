#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add integer and float
float add(int a, float b) {
    return a + b;
}

// Function to add float and double
double add(float a, double b) {
    return a + b;
}

// Function to add double and int
double add(double a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    float f1 = 2.5f, f2 = 3.7f;
    double d1 = 4.8;

    cout << "int + int = " << add(x, y) << endl;
    cout << "int + float = " << add(x, f1) << endl;
    cout << "float + double = " << add(f2, d1) << endl;
    cout << "double + int = " << add(d1, y) << endl;

    return 0;
}
