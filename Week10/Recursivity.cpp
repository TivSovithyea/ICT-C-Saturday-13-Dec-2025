#include <iostream>
using namespace std;

//function (parameter)
long factorial(long a) {
    if (a > 1) {
        return a * factorial(a - 1);
    } else {
        return 1;
    }
}

int main() {

    // Variable
    long number = 3;

    // 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9

    //function(number)

    cout << number << "!=" << factorial(number) << endl;

    return 0;
}