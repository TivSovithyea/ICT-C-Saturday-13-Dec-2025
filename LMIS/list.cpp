{
    std::cout << "\n--- List of Books ---\n";
    if (count == 0) {
        std::cout << "No books available.\n";
    } else {
        std::cout << "ID        Name                Price\n";
        std::cout << "--------------------------------------\n";

        for (int i = 0; i < count; i++) {
            std::cout << ids[i] << "         "
                      << names[i] << "             $"
                      << prices[i] << "\n";
        }
    }
}