#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int count;
    int eraseNumbers = 0;
    int indexCount = 0;
    int changeCount = 0;
    int timesCount = 0;
    int interval1 = 0;
    int interval2 = 0;

    // vector variables
    vector <int> number;
    vector <int> use;
    vector <int> interval;

    // ask for count
    cout << "zadaj pocet (max9): ";
    cin >> count;

    // push back numbers from 1 to entered num
    for (int i = 0; i <= count; i++) {
        number.push_back(i);
    }

    for (int i = 1; i <= number.size(); i++) {
        cout << number[i] << " ";
    }
   

    // a)
    cout << endl;
    // ask how many numbers we want to delete
    cout << "zadaj pocet odobratych prvkov: ";
    cin >> eraseNumbers;

    // erase numbers from the end
    for (int i = 1; i < eraseNumbers; i++) {
        number.push_back(i);
    }

    for (int i = 0; i <= number.size(); i++) {
        number.pop_back();
    }

    for (int i = 0; i <= number.size(); i++) {
        cout << number[i] << " ";
    }


    // b)
    cout << endl;
    // ask for index
    cout << "zadaj, od ktoreho indexu: ";
    cin >> indexCount;

    // ask which value
    cout << "zadaj hodnotu: ";
    cin >> changeCount;

    // asl how many times
    cout << "zadaj kolkokrat: ";
    cin >> timesCount;

    // push back numbers from 1 to entered num
    for (int i = 1; i <= count; i++) {
        use.push_back(i);
    }

    for (int i = 0; i <= use.size(); i++) {
        use.pop_back();
    }

    // add value to vector
    use.insert(use.end(),timesCount, changeCount);

    // print vector
    for (int i = 0; i <= use.size(); i++) {
            cout << use[i] << " ";
        }


    // c)
    cout << endl;
    // ask for interval n1
    cout << "zadaj dolnu hranicu: ";
    cin >> interval1;
    // ask for interval n2
    cout << "zadaj hornu hranicu: ";
    cin >> interval2;

    // push back numbers from 1 to entered num
        for (int i = 1; i <= count; i++) {
            use.push_back(i);
        }

        for (int i = 0; i <= use.size(); i++) {
            use.pop_back();
        }

    // ease index
    use.erase(std::next(use.begin(), interval1), std::next(use.begin(), interval2));   

    // print vector
    for (int i = 0; i <= number.size(); i++) {
            cout << number[i] << " ";
        }


    return 0;
}