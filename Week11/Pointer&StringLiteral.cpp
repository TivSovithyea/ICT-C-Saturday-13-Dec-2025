#include <iostream>
using namespace std;

int main() {

    const char * foo = "Hello";

    string text = "Hello world";

    string * textPtr = &text;

    cout << textPtr << endl;
    return 0;
}