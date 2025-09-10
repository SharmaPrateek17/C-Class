#include <iostream>
using namespace std;

int main() {
    int startDay, daysInMonth;

    cout << "Enter the starting day of the month (0=Sun, 1=Mon, ..., 6=Sat): ";
    cin >> startDay;

    cout << "Enter the number of days in the month (28-31): ";
    cin >> daysInMonth;

    cout << "\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    // Print initial spaces for the first week
    for (int i = 0; i < startDay; i++) {
        cout << "     "; // 5 spaces for alignment
    }

    // Print days
    for (int day = 1; day <= daysInMonth; day++) {
        cout.width(3);   // print in width of 3
        cout << day << "  ";

        // Move to new line after Saturday
        if ((day + startDay) % 7 == 0) {
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}
