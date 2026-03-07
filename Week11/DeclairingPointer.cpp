#include <iostream>
using namespace std;

int main() {

    int firstValue, secondValue;
    int * myPointer;

    myPointer = &firstValue;
    *myPointer = 10;

    myPointer = &secondValue;
    *myPointer = 20;

    cout << "First value is " << firstValue << endl;
    cout << "Second value is " << secondValue << endl;

    return 0;
}