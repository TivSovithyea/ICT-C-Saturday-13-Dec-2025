#include <iostream>

int main() {
    // 1. Create an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Point to its first element
    int* ptr = numbers;

    // 3. Loop through and print using ONLY the pointer
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }

    return 0;
}