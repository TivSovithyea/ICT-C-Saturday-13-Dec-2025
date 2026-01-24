#include <iostream>

using namespace std;

int main() {

    string name;
    cout << "Enter your name: ";
    cin >> name;

    for (int i = name.length() - 1; i >= 0; i--) {
        cout << name[i];
    }


}