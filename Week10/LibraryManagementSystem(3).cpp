#include <iomanip>
#include <iostream>
using namespace std;

void createBook(int& totalBook, int id[], string name[], double price[]) {
    if (totalBook == 100) {
        cout << "Library is full now!" << endl;
    } else {
        cout << "Create New Book" << endl;

        cout << "Please enter book ID: ";
        cin >> id[totalBook];

        cout << "Please enter book name: ";
        // cin >> name[totalBook];
        cin.ignore();
        getline(cin, name[totalBook]);

        cout << "Please enter book price: ";
        cin >> price[totalBook];

        totalBook++;
    }
}

void readBook(int totalBook, int id[], string name[], double price[]) {
    cout << "Read All Book" << endl;

    cout << "Id " << setw(20) << "Name" << setw(20) << "Price" << endl;
    for (int i = 0; i < totalBook; i++) {
        cout << id[i] << setw(20) << name[i] << setw(40) << price[i] << endl;
    }

}

void updateBookPrice(int totalBook, int id[], string name[], double price[], int findById, bool isFound) {
    cout << "Edit Book Price" << endl;

    cout << "Please enter book ID: ";
    cin >> findById;

    isFound = false;

    for (int i = 0; i < totalBook; i++) {

        if (findById == id[i]) {
            isFound = true;
            cout << "The current book price is " << price[i] << endl;
            cout << "Please enter new price : ";
            cin >> price[i];
            break;
        }

    }

    if (!isFound) {
        cout << "Book with Id " << findById << "not found!" << endl;
    }
}

void removeBook(int& totalBook, int id[], string name[], double price[], int findById, bool isFound) {
    cout << "Remove a Book" << endl;

    cout << "Please enter book ID: ";
    cin >> findById;

    isFound = false;

    for (int i = 0; i < totalBook; i++) {

        if (findById == id[i]) {
            isFound = true;
            for (int j = i; j < totalBook - 1; j++) {
                id[j] = id[j + 1];
                name[j] = name[j + 1];
                price[j] = price[j + 1];
            }
            id[totalBook - 1] = 0;
            name[totalBook - 1] = "";
            price[totalBook - 1] = 0;
            totalBook--;
            break;
        }

    }

    if (!isFound) {
        cout << "Book with Id " << findById << "not found!" << endl;
    }
}

int main() {

    int id[100];
    string name[100];
    double price[100];
    int choice;
    bool continues = true;
    int totalBook = 0;
    bool isFound = false;
    int findById = 0;

    cout << "======== Library Management System =======" << endl;

    while (continues) {
        //5
        cout << "1. CREATE (Add New Book)" << endl;
        cout << "2. READ (View All Book)" << endl;
        cout << "3. UPDATE (Edit Book Price)" << endl;
        cout << "4. DELETE (Remove a Book)" << endl;
        cout << "5. EXIT" << endl;
        cout << "Select your option: (1-5) " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                createBook(totalBook, id, name, price);
                break;
            case 2:
                readBook(totalBook, id, name, price);
                break;
            case 3:
                updateBookPrice(totalBook, id, name, price, findById, isFound);
                break;
            case 4:
                removeBook(totalBook, id, name, price, findById, isFound);
                break;
            case 5:
                cout << "Exit" << endl;
                continues = false;
                break;
            default:
                cout << "Invalid" << endl;

        }

    }


    return 0;
}