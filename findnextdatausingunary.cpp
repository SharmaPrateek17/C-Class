#include <iostream>
using namespace std;

class Date {
    int d, m, y;
public:
    Date(int dd, int mm, int yy) : d(dd), m(mm), y(yy) {}
    void display() {
        cout << d << "/" << m << "/" << y << endl;
    }
    void operator++() {
        d++;
        if ((m == 2 && d > 28) || ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) || d > 31) {
            d = 1;
            m++;
            if (m > 12) {
                m = 1;
                y++;
            }
        }
    }
};

int main() {
    Date dt(31, 12, 2023);
    cout << "Current Date: ";
    dt.display();
    ++dt;
    cout << "Next Date: ";
    dt.display();
    return 0;
}