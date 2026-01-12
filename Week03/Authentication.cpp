#include <iostream>
using namespace std;

int main() {
    string username;
    string password;

    string message;

    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    message = ((username == "admin") && (password == "1234")) ? "Login successful" : "Login failed";

    cout << message << endl;
}