#include <iostream>
using namespace std;

int divide(int a, int b = 2) {
    int result = 0;
    result = a / b;
    return result;
}

int main() {

    cout << divide(10, 5) << endl;

    cout << divide(10) << endl;

    return 0;
}