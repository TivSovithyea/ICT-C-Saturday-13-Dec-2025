#include <iostream>
using namespace std;

void printArray(int array[], int size) {
    for(int n = 0; n < size; ++n) {
        cout << array[n] << " \n";
    }
}

int main() {

    int firstArray[] = {1, 2, 3};
    int sizeFirstArray = 3;
    int secondArray[] = {10, 20, 30, 40, 50};
    int sizeSecondArray = 5;

    printArray(firstArray, sizeFirstArray);
    printArray(secondArray, sizeSecondArray);
    return 0;
}