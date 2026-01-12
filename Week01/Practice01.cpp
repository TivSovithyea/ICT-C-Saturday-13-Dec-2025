#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int sum = x + y;
    int difference = x - y;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    return 0;
}