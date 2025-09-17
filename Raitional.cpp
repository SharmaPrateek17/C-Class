#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b==0) ? a : gcd(b, a%b);
}

struct Rational {
    int num, den;
};

int main() {
    Rational r;
    cout << "Enter numerator and denominator: ";
    cin >> r.num >> r.den;

    int g = gcd(r.num, r.den);
    r.num /= g; r.den /= g;

    cout << "Simplified Rational: " << r.num << "/" << r.den;
    return 0;
}
