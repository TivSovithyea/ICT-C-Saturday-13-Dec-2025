#include <iostream>
using namespace std;

string concatenate(const string a, const string b) {
    return a + " " + b;
}

int main() {

    cout << concatenate("hello", "world") << endl;

    return 0;
}