#include <iostream>
using namespace std;

void incrementAll(int* start, int* stop) {
    int * current = start;

    while (current != stop) {
        ++(*current);
        ++current;
    }
}

void printAll(const int* start, const int* stop) {
    const int* current = start;

    while (current != stop) {
        cout << *current << " ";
        ++current;
    }
}

int main() {
    int number[] = {10, 20, 30};
    incrementAll(number, number + 3);
    printAll(number, number + 3);
    return 0;
}