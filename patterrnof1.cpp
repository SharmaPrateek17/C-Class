#include <iostream>
using namespace std;

int main() {
    int n = 4; // change this for more rows

    for (int i = 1; i <= n; ++i) {
        // 1) print leading spaces to center the pyramid
        for (int s = 0; s < n - i; ++s) cout << ' ';

        // 2) print ascending numbers 1,2,...,i
        for (int a = 1; a <= i; ++a) cout << a;

        // 3) print descending numbers i-1,...,2,1
        for (int d = i - 1; d >= 1; --d) cout << d;

        // move to next line
        cout << '\n';
    }

    return 0;
}
