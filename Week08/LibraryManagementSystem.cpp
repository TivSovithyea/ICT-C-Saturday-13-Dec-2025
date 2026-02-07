#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    int id[100];
    string name[100];
    double price[100];
    int choice;
    bool continues = true;
    int totalBook = 0;

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
                break;
            case 2:
                cout << "Read All Book" << endl;

                cout << "Id " << setw(20) << "Name" << setw(20) << "Price" << endl;
                for (int i = 0; i < totalBook; i++) {
                    cout << id[i] << setw(20) << name[i] << setw(40) << price[i] << endl;
                }

                break;
            case 3:
                cout << "Edit Book Price" << endl;
                break;
            case 4:
                cout << "Remove a Book" << endl;
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