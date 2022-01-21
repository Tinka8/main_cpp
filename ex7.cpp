#include <iostream>

using namespace std;

int main() {

    int count = 0;
    float avg = 0;
    float sum = 0;

    cout << "pocet studentov: ";
    cin >> count;

    // arrays
    float *averageStudents = new float[count];
    string *nameStudents = new string[count];


    // add values to arrays
    for (int k = 0; k < count; k++) {
        cout << "zadaj meno " << k + 1 << " ziaka: ";
        cin >> nameStudents[k];
        cout << "zadaj priemer " << k + 1 << " ziaka: ";
        cin >> averageStudents[k];
    }

    // print names and averages
    cout << endl;
    for (int m = 0; m < count; m++) {
        cout << nameStudents[m] << " ";
        cout << averageStudents[m] << endl;
    }

    // average
    for (int i = 0; i < count; i++) {
        sum = averageStudents[i] + sum;
    }

    cout << endl;
    avg = sum / count;
    cout <<  "average: " << avg;

    cout << endl;
    // highest averages
    for (int n = 0; n < count; n++) {
        if (averageStudents[n] > avg) {
            cout << averageStudents[n] << endl;
        }
    }

    return 0;
}
