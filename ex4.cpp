#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // vector variables
    vector <int> numbers;
    vector <int> use;
    vector <int> randomNumbers;
    vector <int> sorted;

    // print values from 1 to 7
    for (int i = 1; i <= 7; i++) {
        numbers.push_back(i);
        
    }

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " "; 
    }
   
    //  add zero to the beginning
    use = numbers;
    use.insert(use.begin(),3,0);
    cout << endl;

    for (int i = 0; i < use.size(); i++) {
        cout << use[i] << " ";
    }

    // add zero to the end
    use = numbers;
    use.insert(use.begin()+7,3,0);
    cout << endl;

    for (int i = 0; i < use.size(); i++) {
        cout << use[i] << " ";
    }

    // erase 1, 2, 3
    use = numbers;
    use.erase(use.begin()+0, use.begin()+3);
    cout << endl;

    for (int i = 0; i < use.size(); i++) {
        cout << use[i] << " ";
    }

    // erase 5, 6, 7
    use = numbers;
    use.erase(use.begin()+4, use.begin()+7);
    cout << endl;

    for (int i = 0; i < use.size(); i++) {
        cout << use[i] << " ";
    }

    cout << endl;
    // generate random numbers 
    for (int i = 1; i < 20; i++) {
        randomNumbers.push_back (rand()%20+1);
    }

    for (int i = 0; i < randomNumbers.size(); i++) {
        cout << randomNumbers[i] << " "; 
    }

    cout << endl;
    // sort random numbers
    sorted = randomNumbers;
    sort(sorted.begin(), sorted.end());
    

    for (int i = 0; i <= sorted.size(); i++) {
        cout << sorted[i] << " "; 
    }



    return 0;
}