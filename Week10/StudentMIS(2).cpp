#include <iomanip>
#include <iostream>
using namespace std;

void createStudent(int& count, int id[], string name[], int age[], char gender[], string address[]) {
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
}

void listStudents(int count, int id[], string name[], int age[], char gender[], string address[]) {
    cout << "List all Students" << endl;

    cout << "Id" << setw(20) << "Name" << setw(40) << "Age" << setw(20) << "Gender" << setw(20) << "Address" << endl;
    for (int i = 0; i < count; i++) {
        cout << id[i] << setw(20) << name[i] << setw(40) << age[i] << setw(20) << gender[i] << setw(20) << address[i] << endl;
    }

    cout << "______________________________________________" << endl;
}

void updateStudent(int findById, int count, int id[], bool isFound, string name[], int age[], char gender[], string address[]) {
    cout << "Update Student" << endl;
    cout << "Enter student id: ";
    cin >> findById;

    for (int i = 0; i< count; i++) {
        if (findById == id[i]) {
            isFound = true;
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name[i]);
            cout << "Enter student age: ";
            cin >> age[i];
            cout << "Enter student gender (F/M): ";
            cin >> gender[i];
            cout << "Enter student address: ";
            cin.ignore();
            getline(cin, address[i]);
            cout << "Update student information success!" << endl;
        }
    }

    if (!isFound) {
        cout << "The student is not found!" << endl;
    }
}

void deleteStudent(int findById, int& count, int id[], bool isFound, string name[], int age[], char gender[], string address[]) {
    cout << "Delete Student" << endl;
    cout << "Enter student id: ";
    cin >> findById;

    for (int i = 0; i < count; i++) {
        if (findById == id[i]) {
            isFound = true;

            for (int j = i; j < count - 1; j++) {
                id[j] = id[j + 1];
                name[j] = name[j + 1];
                age[j] = age[j + 1];
                gender[j] = gender[j + 1];
                address[j] = address[j + 1];
            }
            id[count - 1] = 0;
            name[count - 1] = "";
            age[count - 1] = 0;
            gender[count - 1] =* "";
            address[count - 1] = "";
            count--;

            cout << "Delete student information success!" << endl;
        }
    }

    if (!isFound) {
        cout << "The student is not found!" << endl;
    }
}

int main() {

    const int maxRecord = 100;

    int id[maxRecord];
    string name[maxRecord];
    int age[maxRecord];
    char gender[maxRecord];
    string address[maxRecord];
    int choice;
    int count = 0;
    int findById = 0;
    bool isFound = false;

    bool condition = true;

    while (condition) {

        cout << "1. Add new Student" << endl;
        cout << "2. List all Student" << endl;
        cout << "3. Update Student" << endl;
        cout << "4. Remove Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: (1-5)";
        cin >> choice;

        if (choice == 1) {
            createStudent(count, id, name, age, gender, address);
        } else if (choice == 2) {
            listStudents(count, id, name, age, gender, address);
        } else if (choice == 3) {
            updateStudent(findById, count, id, isFound, name, age, gender, address);
        } else if (choice == 4) {
            deleteStudent(findById, count, id, isFound, name, age, gender, address);
        } else if (choice == 5) {
            condition = false;
        } else {
            cout << "Please enter a valid choice." << endl;
        }

    }


    return 0;
}