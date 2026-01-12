#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    do {
        cout << number << endl;
        number++;
    } while (number <= 10);
}