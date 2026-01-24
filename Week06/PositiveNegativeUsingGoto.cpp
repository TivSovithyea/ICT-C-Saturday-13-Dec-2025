#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;


    if (n > 0) {
        goto positive;
    } else if (n < 0) {
        goto negative;
    } else {
        goto zero;
    }


    positive:
        cout << "The number you enter is positive" << endl;
        goto end;

    negative:
        cout << "The number you enter is negative" << endl;
        goto end;

    zero:
        cout << "The number you enter is zero" << endl;



    end:
        return 0;
}