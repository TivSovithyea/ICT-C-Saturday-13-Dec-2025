#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Please enter your first number: ";
    cin >> a;

    cout << "Please enter your second number: ";
    cin >> b;

    cout << "Please enter your third number: ";
    cin >> c;

    if (a > b && a > c ) {
        cout << "The largest number is " << a << endl;
    } else if (b > a && b > c ) {
        cout << "The largest number is " << b << endl;
    } else if (c > a && c > b ) {
        cout << "The largest number is " << c << endl;
    }

    return 0;
}