#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    int total;
    double average;
    cout << "Enter the Three numbers: ";
    cin >> x >> y >> z;
    total = x + y + z;
    average = (double) total / 3;
    cout << average << endl;
}