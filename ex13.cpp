#include <iostream>

using namespace std;

int main() {

    int randomNumber;
    int avg;
    float average;
    int sum = 0;
    int count = 0;
    float *studentsAverage = new float[randomNumber];

    // vygeneruje nahodne cislo
    randomNumber = (rand()% 15) + 1;

    cout << randomNumber;

    cout << endl;
    // opyta sa na priemery ziakov
    for (int i = 0; i < randomNumber; i++) {
        cout << "zadaj priemer " << i + 1 << " ziaka: ";
        cin >> studentsAverage[i];
        cout << " ";
    }

    cout << endl;
    // vypise priemery ziakov
    for (int i = 0; i < randomNumber; i++) {
        cout << studentsAverage[i];
        cout << " ";
    }

    cout << endl;
    // vypocita priemer celej skupiny
    for (int i = 0; i < randomNumber; i++) {
        sum = sum + studentsAverage[i];
    }

    average = sum / randomNumber;

    cout << "priemer celej skupiny je: " << average;

    // vypise ziakov s lepsim priemerom
    for (int i = 0; i < randomNumber; i++) {
        if (studentsAverage[i] < average) {
            count = count + 1;
        }
    }

    cout << "pocet nadpriemernych ziakov je: " << count;


    return 0;
}