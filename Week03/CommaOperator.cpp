#include <iostream>

using namespace std;

int main() {

    int a = 0, b = 0;

    a = (b=3, b+2);

    cout << a << endl;
}