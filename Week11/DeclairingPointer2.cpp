#include <iostream>
using namespace std;

int main() {

    int firstValue = 5, secondValue = 15;
    int *p1, *p2;

    p1 = &firstValue;
    p2 = &secondValue;

    *p1 = 10; // firstValue = 10;
    *p2 = *p1; // secondValue = firstValue;
    p1 = p2; // p1 = &secondValue;
    *p1 = 20; // secondValue = 20;

    cout << "First value is " << firstValue << endl;
    cout << "Second value is " << secondValue << endl;


    return 0;
}