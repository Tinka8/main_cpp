#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> vektor;
    vector<int> vektor1;
    vector<int> randomNumbers;

    //  naplnenie vectoru
    for (int i = 1; i <= 7; i++) {
        vektor.push_back(i);
        vektor1.push_back(i);
    }

    // vypisanie vectoru
    for (int k = 0; k < vektor.size(); k++) {
        cout << vektor[k];
        cout << " ";
    }


    cout << endl;
    // doplnit 3 nuly na zaciatok
    vektor1.insert(vektor1.begin(), 3, 0);
    for (int k = 0; k < vektor1.size(); k++) {
        cout << vektor1[k];
        cout << " ";
    }

    cout << endl;
    // doplnit 3 nuly na koniec
    vektor.insert(vektor.end(), 3, 0);
    for (int k = 0; k < vektor.size(); k++) {
        cout << vektor[k];
        cout << " ";
    }

    cout << endl;
    // odstrani 1 2 3
    vektor1.erase(vektor1.begin()+0, vektor1.begin()+6);
    for (int k = 0; k < vektor1.size(); k++) {
        cout << vektor1[k];
        cout << " ";
    }

    cout << endl;
    // odstrani 5 6 7
    vektor.erase(vektor.begin()+4, vektor.begin()+10);
    for (int k = 0; k < vektor.size(); k++) {
        cout << vektor[k];
        cout << " ";
    }

    cout << endl;
    // nahodne cisla 1 - 20
    for (int i = 1; i <= 20; i++) {
        randomNumbers.push_back(rand()%20);
    }

    for (int i = 1; i <= randomNumbers.size(); i++) {
        cout << randomNumbers[i];
        cout << " ";
    }


    cout << endl;
    // zoradi nahodne cisla
    sort(randomNumbers.begin(),randomNumbers.end());
    for (int i = 1; i <= randomNumbers.size(); i++) {
        cout << randomNumbers[i];
        cout << " ";
    }

    return 0;
}