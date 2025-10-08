#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m) : meters(m) {}
    operator int() { return meters; }
    void display() { cout << meters << " meters\n"; }
};

int main() {
    Distance d1(100);
    int m = d1; // type conversion
    cout << "Converted to int: " << m << endl;
    return 0;
}