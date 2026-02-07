#include <iostream>
using namespace std;

int main() {

    const int fixedNumbers[5] = {101, 202, 303, 404, 505};

    int userNumber;

    cin >> userNumber;

    for (int i = 0; i < 5; i++) {
        if (fixedNumbers[i] == userNumber) {
            cout << "Access Granted!";
            return 0;
        }
    }

    cout << "Access Denied!";

    return 0;

}