#include <iostream>
using namespace std;

int main() {

    int myVar = 25;
    int *foo = &myVar;
    int bar = *foo;

    cout << "My var " << myVar << endl;
    cout << "My Foo " << foo << endl;
    cout << "My Bar " << *foo << endl;

    return 0;
}