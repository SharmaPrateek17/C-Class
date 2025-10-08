#include <iostream>
using namespace std;

class Array {
    int *arr, size;
public:
    Array(int s) {
        size = s;
        arr = new int[size];
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i)
            cin >> arr[i];
    }
    void countEvenOdd() {
        int even = 0, odd = 0;
        for (int i = 0; i < size; ++i)
            (arr[i] % 2 == 0) ? ++even : ++odd;
        cout << "Even: " << even << ", Odd: " << odd << endl;
    }
    ~Array() { delete[] arr; }
};

int main() {
    Array a(6);
    a.countEvenOdd();
    return 0;
}