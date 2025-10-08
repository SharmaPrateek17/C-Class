#include <iostream>
using namespace std;

class Array {
    int a[5];
public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; ++i)
            cin >> a[i];
    }
    void display() {
        for (int i = 0; i < 5; ++i)
            cout << a[i] << " ";
        cout << endl;
    }
    void operator++() {
        for (int i = 0; i < 5; ++i)
            ++a[i];
    }
    void operator--() {
        for (int i = 0; i < 5; ++i)
            --a[i];
    }
};

int main() {
    Array arr;
    arr.input();
    ++arr;
    cout << "After Increment: ";
    arr.display();
    --arr;
    cout << "After Decrement: ";
    arr.display();
    return 0;
}