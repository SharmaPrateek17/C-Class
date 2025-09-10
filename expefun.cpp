#include <iostream>
using namespace std;

long power(int x, int y) {
    if (y == 0)  // base case
        return 1;
    return x * power(x, y - 1); // recursive step
}

int main() {
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    cout << base << "^" << exp << " = " << power(base, exp) << endl;
    return 0;
}
