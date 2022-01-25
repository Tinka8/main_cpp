#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vektor;
    vector<int> vektor1;
    int pocet;
    int forwards;
    int backwards;
    int del;
    int hodnota;
    int nasobok;
    int index;
    int odIndexu, poIndex;

    cout << "zadaj jednociferne cislo: ";
    cin >> pocet;

    // vygeneruje vector
    for (int i = 0; i <= pocet; i++) {
        vektor.push_back(i);
        vektor1.push_back(i);
    }

    // vypise vector
    for (int k = 1; k < vektor.size(); k++) {
        cout << vektor[k];
        cout << " ";
    }

    cout << endl;
    // odobrat urcite pocet od konca
    cout << "odobrat od konca: ";
    cin >> backwards;

    del = pocet - backwards;

    vektor1.erase(vektor1.begin()+(del+1), vektor1.begin()+(pocet+1));
    for (int k = 1; k < vektor1.size(); k++) {
        cout << vektor1[k];
        cout << " ";
    }

    cout << endl;
    // vlozit niekolkokrat hodnotu od indexu
    cout << "zadaj index: ";
    cin >> index;

    cout << "zadaj kolkokrat: ";
    cin >> nasobok;

    cout << "zadaj hodnotu: ";
    cin >> hodnota;

    vektor.insert(vektor.begin()+index, nasobok, hodnota);
    for (int k = 1; k < vektor.size(); k++) {
        cout << vektor[k];
        cout << " ";
    }

    // vyprazdni vektor
    vektor.clear();

    // vygeneruje vector
    for (int i = 0; i <= pocet; i++) {
        vektor.push_back(i);
    }

    cout << endl;
    // vymazat prvky
    cout << "zadaj hranicu od: ";
    cin >> odIndexu;

    cout << "zadaj hranicu po: ";
    cin >> poIndex;

    vektor.erase(vektor.begin()+odIndexu, vektor.begin()+(poIndex+1));
     for (int k = 1; k < vektor.size(); k++) {
        cout << vektor[k];
        cout << " ";
    }

    return 0;
}                                               