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
    friend Array operator+(Array, Array);
};

Array operator+(Array x, Array y) {
    Array temp;
    for (int i = 0; i < 5; ++i)
        temp.a[i] = x.a[i] + y.a[i];
    return temp;
}

int main() {
    Array a1, a2, a3;
    a1.input();
    a2.input();
    a3 = a1 + a2;
    cout << "Sum: ";
    a3.display();
    return 0;
}