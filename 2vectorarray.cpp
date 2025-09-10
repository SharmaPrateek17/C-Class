#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of vectors: ";
    cin >> n;

    int a[n], b[n], sum[n];
    cout << "Enter elements of first vector:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Enter elements of second vector:\n";
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) sum[i] = a[i] + b[i];

    cout << "Sum vector:\n";
    for (int i = 0; i < n; i++) cout << sum[i] << " ";
    return 0;
}