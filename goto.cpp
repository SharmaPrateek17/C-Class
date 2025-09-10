#include <iostream>
using namespace std;

int main() {
    int a, b, c, greatest;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        goto A;
    else if (b >= a && b >= c)
        goto B;
    else
        goto C;

A:
    greatest = a;
    goto END;

B:
    greatest = b;
    goto END;

C:
    greatest = c;
    goto END;

END:
    cout << "Greatest number is: " << greatest << endl;

    return 0;
}
