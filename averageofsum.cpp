#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

    // Calculate sum using for loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Calculate average
    double average = (double)sum / n;

    cout << "The average of first " << n << " natural numbers is: " << average << endl;

    return 0;
}
