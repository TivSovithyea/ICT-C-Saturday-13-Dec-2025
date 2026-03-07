#include <iostream>
using namespace std;

int main() {

    int x;
    int y = 10;

    const int *p = &y;

    x = *p;

    // *p = x;

    return 0;

}