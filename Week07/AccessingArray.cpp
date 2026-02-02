#include <iostream>
using namespace std;

int main() {

    int foo[5] = {5, 10, 15, 0, 25};

    int a = 2;

    foo[0] = a;

    // {2, 10, 15, 0, 25};

    foo[a] = 75;

    // {2, 10, 75, 0, 25};

    int b = foo[a + 2];

    // b = 25

    foo[foo[a]] = foo[2] + 5;

    // foo[75] = 80; // Out of bound, undefined behavior
}