#include <iostream>
using namespace std;

int main() {

    int scores[5] = {};

    for (int i = 0; i < 5; i++) {
        cout << "Please enter score [" << i + 1 << "] :"  << endl;
        cin >> scores[i];
    }

    // for (int i = 4; i >= 0; i--) {
    //     cout << "Your reverse score is [" << i + 1 << "] : ";
    //     cout << scores[i] << endl;
    // }

    reverse(scores, scores + 5);

    for (int i = 0; i < 5; i++) {
        cout << "Array Reverse [" << i + 1 << "] : ";
        cout << scores[i] << endl;
    }

    return 0;
}