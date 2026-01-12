#include <iostream>
using namespace std;

int main() {

    float score;

    cout << "Please enter a score: ";
    cin >> score;

    if (score >= 50) {
        cout << "You passed!";
    } else {
        cout << "You Fail!";
    }

    return 0;

}