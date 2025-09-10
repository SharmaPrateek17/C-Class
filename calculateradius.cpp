#include <iostream>
using namespace std;

// Function to calculate area of a circle
float areaOfCircle(float radius) {
    return 3.14159 * radius * radius;  // πr²
}

int main() {
    float r;

    cout << "Enter radius of the circle: ";
    cin >> r;

    // Call function
    float area = areaOfCircle(r);

    cout << "Area of circle with radius " << r << " is: " << area << endl;

    return 0;
}
