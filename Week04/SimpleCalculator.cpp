#include <iostream>
using namespace std;

int main () {

    int a, b, answer;
    char op;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the operation (+ , - , *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            answer = a + b;
            break;
        case '-':
            answer = a - b;
            break;
        case '*':
            answer = a * b;
            break;
        case '/':
            answer = a / b;
            break;
        default:
            cout << "Invalid operation" << endl;
            return 0;
    }

    cout << "The answer is " <<  answer << endl;

    return 0;
}