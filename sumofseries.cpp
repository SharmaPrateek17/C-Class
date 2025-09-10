#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 5;   // number of terms
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        long long term = pow(i, i) / i;  // i^i / i = i^(i-1)
        cout << i << "^" << i << "/" << i << " = " << term << endl;
        sum += term;
    }

    cout << "Sum of series = " << sum << endl;
    return 0;
}
