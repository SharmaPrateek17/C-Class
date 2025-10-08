#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int x;
public:
    void set(int val) { x = val; }
    friend float mean(A, B);
};

class B {
    int y;
public:
    void set(int val) { y = val; }
    friend float mean(A, B);
};

float mean(A a, B b) {
    return (a.x + b.y) / 2.0;
}

int main() {
    A obj1; B obj2;
    obj1.set(10); obj2.set(20);
    cout << "Mean: " << mean(obj1, obj2);
    return 0;
}