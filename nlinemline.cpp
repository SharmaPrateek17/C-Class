#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> lines(10);
    int m, n;

    cout << "Enter 10 lines of text:\n";
    for (int i = 0; i < 10; ++i)
        getline(cin, lines[i]);

    cout << "Enter starting line (m): ";
    cin >> m;
    cout << "Enter number of lines to display (n): ";
    cin >> n;

    cout << "Displaying lines:\n";
    for (int i = m - 1; i < m - 1 + n && i < 10; ++i)
        cout << lines[i] << endl;

    return 0;
}