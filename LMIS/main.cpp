// main.cpp
#include <iostream>
#include <string>

int main() {
    // 1. Declare variables here so included files can see them
    int ids[100];
    std::string names[100];
    double prices[100];
    int count = 0;
    int choice;

    do {
        std::cout << "\n=== BOOK MANAGEMENT (No Functions) ===\n";
        std::cout << "1. Create Book\n";
        std::cout << "2. List Books\n";
        std::cout << "3. Update Book\n";
        std::cout << "4. Delete Book\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                #include "create.cpp"
                break;
            case 2:
                #include "list.cpp"
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}