#include <iostream>
using namespace std;

int main() {

    // While Loop Increment

    int n = 0;

    while (n <= 10) {
        cout << n << ", ";
        ++n;
    }

    cout << "Reach out!!!" << endl;

    // While Loop Decrement

    n = 10;

    while (n > -5) {
        cout << n << ", ";
        --n;
    }

    cout << "Lift Off!!!" << endl;

    return 0;
}