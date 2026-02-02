#include <iostream>
using namespace std;

int main() {
    string password;
    int pin;

    while(true) {
        cout << "Enter a password (at least 6 characters): ";
        cin >> password;
        if (password.length() < 6) {
            cout << "Password too short. Please try again." << endl;
            continue;
        } else {
            pin = rand() % 9000 + 1000; // Generate a random 4-digit PIN
            cout << "User created successfully!" << endl;
            cout << "Your PIN is: [" << pin << "]" << endl;
            break;
        }
    }
}