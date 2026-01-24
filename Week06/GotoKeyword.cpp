#include <iostream>
using namespace std;

int main() {

    int n = 10;

    myLabel:
        cout << n << endl;
        n--;

    if (n > 0) goto myLabel;

    cout << "LiftOff!" << endl;

}