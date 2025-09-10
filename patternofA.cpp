#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows

    for (int i = 1; i <= n; i++) {          // loop for rows
        for (int j = 0; j < i; j++) {       // loop for characters
            cout << char('A' + j);          // print letters starting from 'A'
        }
        cout << endl;                       // move to next line
    }

    return 0;
}
