#include <iostream>
using namespace std;

// Function with default arguments
float volumeCuboid(float length = 1, float width = 1, float height = 1) {
    return length * width * height;
}

int main() {
    // Different ways to call function
    cout << "Volume when all dimensions given (5, 4, 3): " 
         << volumeCuboid(5, 4, 3) << endl;

    cout << "Volume when only length & width given (5, 4): " 
         << volumeCuboid(5, 4) << endl;

    cout << "Volume when only length given (5): " 
         << volumeCuboid(5) << endl;

    cout << "Volume when no arguments given: " 
         << volumeCuboid() << endl;

    return 0;
}
