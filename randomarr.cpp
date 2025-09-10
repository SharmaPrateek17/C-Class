#include <iostream>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()
using namespace std;

int main() {
    int n;
    cout << "Enter how many random numbers: ";
    cin >> n;

    int arr[n];
    srand(time(0));   

    cout << "Random numbers: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
