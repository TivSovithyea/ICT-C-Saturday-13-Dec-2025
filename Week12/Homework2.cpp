#include <iostream>

// The function expects memory addresses (pointers)
void swapValues(int* ptrA, int* ptrB) {
    int temp = *ptrA; // 1. Save the value at address A
    *ptrA = *ptrB;    // 2. Copy the value from address B into address A
    *ptrB = temp;     // 3. Copy the saved value into address B
}

int main() {
    int x = 5;
    int y = 99;

    // We pass the "address of" (&) x and y, not the numbers 5 and 99
    swapValues(&x, &y);

    std::cout << "x is now: " << x << "\n";
    std::cout << "y is now: " << y << "\n";

    return 0;
}