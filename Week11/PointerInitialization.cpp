#include <iostream>
using namespace std;

int main() {

    int myVar;
    int *myPointer = &myVar;

    int myVar2;
    int *myPointer2;
    myPointer2 = &myVar2;

    int myVar3;
    int *foo = &myVar3;
    int *bar = foo;

    cout << "End";
    return 0;
}