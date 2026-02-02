#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // for (int i = name.length() - 1; i >= 0; i--) {
    //     cout << name[i];
    // }

    reverse(name.begin(), name.end());
    cout << name << endl;

    return 0;
}