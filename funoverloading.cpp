#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(double y) {
        cout << "Double: " << y << endl;
    }
    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(12.34);
    p.show("Hello");
    return 0;
}
