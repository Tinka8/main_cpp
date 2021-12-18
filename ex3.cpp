#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int totalSeats = 0;

    cout << "Total seats in bus (there are 4 seats in every row): ";
    cin >> totalSeats;

    if (totalSeats % 4) {
        cout << "Entered number of seats has to be divisible by 4" << "\n";
        return 1;
    }

    bool *reservations = new bool[totalSeats];
    bool reserving = true;
    int choice = 1;

    while(reserving) {

        // Reserve seat
        cout << "Select a seat (1 - " << totalSeats << "): ";
        cin >> choice;
        if (choice > 0 && choice <= totalSeats) {
            reservations[choice - 1] = true;
        }

        // Continue reservation?
        cout << "Continue reservation?"
             << "\n";
        cout << "(1) Continue"
             << "\n";
        cout << "(2) Stop reservation"
             << "\n";
        cin >> choice;

        if (choice != 1) {
            reserving = false;
        }
    }

    int reservedCount = 0;
    int freeCount = 0;
    int freeCountWindow = 0;

    for (int i = 0; i < totalSeats; i++) {
        if (reservations[i]) {
            reservedCount += 1;
        } else {
            freeCount += 1;

            if (i % 4 == 0) { // Left window
                freeCountWindow += 1;
            } else if (i % 4 == 3) { // Right window
                freeCountWindow += 1;
            }
        }
    }

    int freePercentage = freeCount * 100 / totalSeats;
    int reservedPercentage = reservedCount * 100 / totalSeats;

    cout << "Free seats " << freeCount << " (" << freePercentage << "%)" << "\n";
    cout << "Reserved seats " << reservedCount << " (" << reservedPercentage << "%)" << "\n";
    cout << "Free seats at window " << freeCountWindow << "\n";

    return 0;
}