#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    while (!(cin >> number)) {  // Keep asking until the user enters a valid number
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }
    cout << "You entered: " << number;
}