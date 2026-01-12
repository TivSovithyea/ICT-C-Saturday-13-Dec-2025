#include <iostream>
using namespace std;

int main() {

    const int pinCode = 1234;
    const int balance = 500;

    int userPinCode;
    int option;
    int withdrawAmount;

    cout << "==========Simple ATM Logic==========" << endl;
    cout << "====================================" << endl;
    cout << "Please enter your pin: ";
    cin >> userPinCode;

    if (userPinCode == pinCode) {

        // Todo Provide Option 1, 2
        cout << "Please select an options: " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw" << endl;
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your Balance is: " << balance << endl;
                break;
            case 2:
                cout << "Enter amount for withdrawal: ";
                cin >> withdrawAmount;
                // Todo check withdrawAmount and Balance
                if (withdrawAmount > balance) {
                    cout << "Insufficient Funds";
                } else {
                    cout << "Successfully withdraw." << endl;
                    cout << "Your Balance is: " << balance - withdrawAmount << endl;
                }
                break;
            default:
                cout << "Invalid option!!!!" << endl;
        }
    } else {
        cout << "Access Denied" << endl;
    }

    return 0;
}