#include <iostream>
using namespace std;

int main() {

    // First Example
    // char ch;
    //
    // do {
    //     cin >> ch;
    //     cout << "Char: " << ch << endl;
    //     cin >> ch;
    // } while (ch == 'y');

    // Second Example

    string str;

    do {
        cout << "Enter a text: ";
        getline(cin, str);
        cout << "You entered: " << str << endl;
    } while (str != "goodbye");

    return 0;
}