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
    void findMax() {
        int max = arr[0];
        for (int i = 1; i < size; ++i)
            if (arr[i] > max) max = arr[i];
        cout << "Largest Element: " << max << endl;
    }
    ~Array() { delete[] arr; }
};

int main() {
    Array a(5);
    a.findMax();
    return 0;
}