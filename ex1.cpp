//  Vytvor program, ktorý po zadaní počtu žiakov vyzve používateľa na zadanie ich mien a priemerov známok (dve polia). 
//  Program nech umožní:
//  vyhľadať žiaka podľa mena a vypíše jeho priemer (príp. žiak sa v poli nenachádza)
//  vypísať počet a mená žiakov (aj ich priemery), ktorých priemer je lepší ako zadaný priemer
#include <iostream>

using namespace std;

int main() {

    // declare list of students
    int studentsCount = 0;

    cout << "How many students do you want to enter?";
    cin >> studentsCount;

    float *studentsAverages = new float[studentsCount];
    string *studentsNames = new string[studentsCount];

    // get student data
    for (int i = 0; i < studentsCount; i++) {
        cout << "Student " << i + 1 << "\n";
        cout << "Name: ";
        cin >> studentsNames[i];
        cout << "Average: ";
        cin >> studentsAverages[i];
    }

    // get student to search for
    string searchName;

    cout << "\n" << "Search for student (enter name): ";
    cin >> searchName;

    // search for student
    bool found = false;
    int foundPosition = 0;

    for (int i = 0; i < studentsCount; i++) {
        if (studentsNames[i] == searchName) {
            found = true;
            foundPosition = i;
        }
    }

    // if student was not found
    if (!found) {
        cout << "Student was not found";
        return 1;
    }

    cout << "\n" << "Found student";
    cout << "\n"
         << "Name: " << studentsNames[foundPosition];
    cout << "\n"
         << "Average: " << studentsAverages[foundPosition];

    // list students better than found student
    cout << "\n" << "Listing better students:";
    for (int i = 0; i < studentsCount; i++) {
        if (studentsAverages[i] < studentsAverages[foundPosition]) {
            cout << "\n"
                 << studentsNames[i] << " - " << studentsAverages[i];
        }
    }

    cout << "\n";

    return 0;
}