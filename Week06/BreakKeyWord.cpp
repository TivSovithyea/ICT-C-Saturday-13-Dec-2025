#include <iostream>
using namespace std;

int main() {
    for (int n = 10; n > 0; n--) {
        cout << n << endl;

        if (n == 3) {
            cout << " Countdown aborted!";
            break;
        }
    }
}