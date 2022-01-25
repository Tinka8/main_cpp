#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<char> forwards;
    vector<char> backwards;

    string text;

    cout << "Zadejte text, ktery chcete prevratit: ";
    cin >> text;

    for (int i = 0; i < text.size(); i++) {
        forwards.push_back(text[i]);
    }

    for (int i = text.size() - 1; i >= 0; i--) {
        backwards.push_back(text[i]);
    }

    cout << endl << "Prevraceny text je: ";
    for (int i = 0; i < text.size(); i++) {
        cout << backwards[i];
    }

    cout << endl;

    return 0;
}
