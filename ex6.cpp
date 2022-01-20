#include <iostream>

using namespace std;

int main() {

    int sum = 0;

    string heroNames[15] = {"Tiny", "Legion Commander", "Night Stalker", "Chaos Knight", "Io", "Phoenix", "Magnus", "Snapfire", "Undying", "Tidehunter", "Abadon", "Dawnbreaker", "Axe", "Huskar", "Marci"};
    int heroStrengths[15] = {30, 25, 23, 22, 17, 23, 25, 20, 22, 27, 22, 26, 25, 21, 23}; 

    // sum strengths 
    for(int i = 0; i < 15; i++) {
        sum = sum + heroStrengths[i];

    }

    // avg strength
    float average = sum / 15.0;

    for(int i = 0; i < 15; i++) {
        cout << heroNames[i] << ": " << heroStrengths[i] << endl;

    }

    cout << "============================" << endl;
    cout << "Total strength: " << sum << endl;
    cout << "Average strength: " << average << endl;

    cout << endl;
    cout << "Heroes with strength higher than average:" << endl;
    for(int j = 0; j < 15; j++) {
        if(average < heroStrengths[j]) {
            cout << heroNames[j] << ": " << heroStrengths[j] << endl;
        }
    }


    return 0;
}
