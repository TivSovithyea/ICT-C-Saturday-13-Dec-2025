#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    do {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    } while (number != 0);

    cout << "The Sum = " << sum << endl;
}