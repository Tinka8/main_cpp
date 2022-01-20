#include <iostream>

using namespace std;

int main() {

    int result = 0;

    string heroNames[10] = {"Tiny", "Legion Commander", "Night Stalker", "Chaos Knight", "Io", "Phoenix", "Magnus", "Snapfire", "Undying", "Tidehunter"};
    int heroStrengths[10] = {30, 25, 23, 22, 17, 23, 25, 20, 22, 27}; 

    // sum strengths
    int sum = heroStrengths[0] + heroStrengths[1] + heroStrengths[2] + heroStrengths[3] + heroStrengths[4] + heroStrengths[5] + heroStrengths[6] + heroStrengths[7] + heroStrengths[8] + heroStrengths[9];
    
    // avg strength
    float average = sum / 10.0;


    for(int i = 0; i < 10; i++) {
        heroStrengths[i];
        cout << heroNames[i] << ": " << heroStrengths[i] << endl;

    }

    cout << "============================" << endl;
    cout << "Total strength: " << sum << endl;
    cout << "Average strength: " << average << endl;

    cout << endl;
    cout << "Heroes with strength higher than average:" << endl;
    cout << heroNames[0] << ": " << heroStrengths[0] << endl;
    cout << heroNames[1] << ": " << heroStrengths[1] << endl;
    cout << heroNames[5] << ": " << heroStrengths[5] << endl;
    cout << heroNames[6] << ": " << heroStrengths[6] << endl;
    cout << heroNames[9] << ": " << heroStrengths[9] << endl;

    return 0;
}