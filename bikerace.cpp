#include <iostream>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()
#include <windows.h> // for Sleep()

using namespace std;

int main() {
    srand(time(0)); // Seed random numbers
    
    int trackLength = 50;
    int posA = 0, posB = 0;

    cout << " Bike Race Simulation 🏍\n\n";

    while (posA < trackLength && posB < trackLength) {
        system("CLS"); // clear screen (Windows)
        
        // Random step speeds
        posA += rand() % 3 + 1;  // 1 to 3
        posB += rand() % 3 + 1;  // 1 to 3

        // Display track
        for (int i = 0; i < trackLength; i++) {
            if (i == posA) cout << "A";
            else if (i == posB) cout << "B";
            else cout << ".";
        }
        cout << endl;

        Sleep(200); // 200 ms delay
    }

    // Decide winner
    if (posA >= trackLength && posB >= trackLength) {
        cout << "\nIt's a Tie!";
    } else if (posA >= trackLength) {
        cout << "\n Bike A Wins!";
    } else {
        cout << "\n Bike B Wins!";
    }

    return 0;
}
