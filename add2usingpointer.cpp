#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b;

    int sum = *p1 + *p2;
    cout << "Sum = " << sum << endl;

    return 0;
}