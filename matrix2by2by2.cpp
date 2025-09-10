#include <iostream>
using namespace std;

int main() {
    int mat[2][2][2];

    // Input elements
    cout << "Enter elements of a 2x2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "Element [" << i << "][" << j << "][" << k << "]: ";
                cin >> mat[i][j][k];
            }
        }
    }

    // Display elements
    cout << "\nThe 2x2x2 matrix is:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Layer " << i + 1 << ":" << endl;
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << mat[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
