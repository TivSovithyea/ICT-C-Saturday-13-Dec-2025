#include <iostream>
using namespace std;

int main() {

    //Todo

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        cout << "You entered an positive number.\n";
    } else {
        cout << "You entered a negative number.\n";
    }

    cout << "This statement is always execute." << endl;

    return 0;
}