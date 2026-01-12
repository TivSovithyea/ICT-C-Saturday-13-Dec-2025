#include <iostream>
using namespace std;

int main() {

    int day = 0;

    cout << "Please enter a number of day (1 - 7): " << endl;
    cin >> day;

    switch (day) {
        case 1:
            cout << "It's monday";
            break;
        case 2:
            cout << "It's tuesday";
            break;
        case 3:
            cout << "It's Wedenesday";
            break;
        case 4:
            cout << "It's Thursday";
            break;
        case 5:
            cout << "It's Friday";
            break;
        case 6:
            cout << "It's Saturday";
            break;
        case 7:
            cout << "It's Sunday";
            break;
        default:
            cout << "It's not a valid day number!" << endl;
    }

}