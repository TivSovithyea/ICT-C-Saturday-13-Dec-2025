#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b(3);
    int c{2};

    a = a + b;
    int result = a - c;

    cout << "result = " << result << endl;
    return 0;
}