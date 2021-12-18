#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float x[] = {0,2000,2500,2000,1500,2000};
    float y[] = {185,204,258,207,156,220};

    const int pocet = 6;

    float maxHeight = y[0];
    float minHeight = y[0];

    for (int i = 0; i < pocet; i++) {
        if (y[i] > maxHeight) {
            maxHeight = y[i];
        }

        if (y[i] < minHeight) {
            minHeight = y[i];
        }
    }

    cout << "Nejnizsim bodem je: " << minHeight << "m"
         << "\n";
    cout << "Nejvyssim bodem je: " << maxHeight << "m"
         << "\n";

    float distance = 0;

    for (int i = 0; i < pocet - 1; i ++) {
        float a = x[i + 1];                     // Odvesna A
        float b = abs(y[i + 1] - y[i]);         // Odvesna B

        float c = sqrt(pow(a, 2) + pow(b, 2));  // Prepona

        distance += c;
    }

    cout << "Celkova vzdalenost je " << distance << "m" << "\n";

    return 0;
}