{
    if (count >= 100) {
        std::cout << "Error: Library is full!\n";
    } else {
        std::cout << "\n--- Add New Book ---\n";

        std::cout << "Enter Book ID: ";
        std::cin >> ids[count];
        std::cin.ignore(); // Clear buffer

        std::cout << "Enter Book Name: ";
        std::getline(std::cin, names[count]);

        std::cout << "Enter Book Price: ";
        std::cin >> prices[count];

        count++;
        std::cout << "Book added successfully!\n";
    }
}