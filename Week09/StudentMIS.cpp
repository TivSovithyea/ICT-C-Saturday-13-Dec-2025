#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    const int maxRecord = 100;

    int id[maxRecord];
    string name[maxRecord];
    int age[maxRecord];
    char gender[maxRecord];
    string address[maxRecord];
    int choice;
    int count = 0;

    bool condition = true;

    while (condition) {

        cout << "1. Add new Student" << endl;
        cout << "2. List all Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: (1-3)";
        cin >> choice;

        if (choice == 1) {

            if (count < 100) {
                cout << "Enter student id: ";
                cin >> id[count];
                cout << "Enter student name: ";
                cin.ignore();
                getline(cin, name[count]);
                cout << "Enter student age: ";
                cin >> age[count];
                cout << "Enter student gender (F/M): ";
                cin >> gender[count];
                cout << "Enter student address: ";
                cin.ignore();
                getline(cin, address[count]);
                count ++;
            } else {
                cout << "The students is full now!";
            }

            cout << "______________________________________________" << endl;

        } else if (choice == 2) {
            // Todo List Student Information

            cout << "List all Students" << endl;

            cout << "Id" << setw(20) << "Name" << setw(40) << "Age" << setw(20) << "Gender" << setw(20) << "Address" << endl;
            for (int i = 0; i < count; i++) {
                cout << id[i] << setw(20) << name[i] << setw(40) << age[i] << setw(20) << gender[i] << setw(20) << address[i] << endl;
            }

            cout << "______________________________________________" << endl;

        } else if (choice == 3) {
            condition = false;
        } else {
            cout << "Please enter a valid choice." << endl;
        }


    }



    return 0;
}