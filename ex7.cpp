#include <iostream>

using namespace std;

int main() {

    int count = 0;
    float avg = 0;
    float sum = 0;
    string name;

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

    cout << endl;
    // ask for name 
    cout << "vyhladaj ziaka podla mena: ";
    cin >> name;
    // print name and average
    for (int p = 0; p < count; p++) {
        if (name == nameStudents[p])
            cout << nameStudents[p] << " " << averageStudents[p];
    }


    cout << endl;
    // average
    for (int i = 0; i < count; i++) {
        sum = averageStudents[i] + sum;
    }

    cout << endl;
    avg = sum / count;
    cout <<  "priemer: " << avg;

    cout << endl;
    // highest averages
    for (int n = 0; n < count; n++) {
        if (averageStudents[n] < avg) {
            cout << "lepsi ako priemer: " << nameStudents[n] << " " << averageStudents[n] << endl;
        }
    }

    return 0;
}
