#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

enum class PersonType { STUDENT, TEACHER };

// --- Data Models ---
class Person {
public:
    string id, name;
    int age;
    PersonType type;
    Person(string i, string n, int a, PersonType t) : id(i), name(n), age(a), type(t) {}
};

class Student : public Person {
public:
    int grade;
    Student(string i, string n, int a, int g) : Person(i, n, a, PersonType::STUDENT), grade(g) {}
};

class Teacher : public Person {
public:
    string subject;
    Teacher(string i, string n, int a, string s) : Person(i, n, a, PersonType::TEACHER), subject(s) {}
};

// --- Exception Handling Helper ---
void validateAge(int age) {
    if (age < 0 || age > 120) {
        throw invalid_argument("Age must be between 0 and 120.");
    }
}

// --- Management System ---
class SchoolSystem {
private:
    Person** people;
    int count;
    int capacity;
    const string filename = "school_data.txt";

    void resize() {
        capacity *= 2;
        Person** newData = new Person*[capacity];
        for (int i = 0; i < count; i++) {
            newData[i] = people[i];
        }
        delete[] people;
        people = newData;
    }

public:
    SchoolSystem() : count(0), capacity(2) {
        people = new Person*[capacity];
    }

    ~SchoolSystem() {
        for (int i = 0; i < count; i++) delete people[i];
        delete[] people;
    }

    // CREATE
    void addStudent(string i, string n, int a, int g) {
        if (count == capacity) resize();
        people[count++] = new Student(i, n, a, g);
    }

    void addTeacher(string i, string n, int a, string s) {
        if (count == capacity) resize();
        people[count++] = new Teacher(i, n, a, s);
    }

    // READ
    void displayAll() const {
        cout << "\n--- School Records (" << count << "/" << capacity << ") ---" << endl;
        if (count == 0) {
            cout << "No records found." << endl;
            return;
        }
        for (int i = 0; i < count; i++) {
            if (people[i]->type == PersonType::STUDENT) {
                Student* s = static_cast<Student*>(people[i]);
                cout << "[Student] ID: " << s->id << " | Name: " << s->name
                     << " | Age: " << s->age << " | Grade: " << s->grade << endl;
            } else {
                Teacher* t = static_cast<Teacher*>(people[i]);
                cout << "[Teacher] ID: " << t->id << " | Name: " << t->name
                     << " | Age: " << t->age << " | Subject: " << t->subject << endl;
            }
        }
    }

    // UPDATE
    void updatePerson(string id) {
        for (int i = 0; i < count; i++) {
            if (people[i]->id == id) {
                cout << "New Name: "; cin.ignore(); getline(cin, people[i]->name);

                int newAge;
                cout << "New Age: "; cin >> newAge;
                validateAge(newAge); // Throws exception if invalid
                people[i]->age = newAge;

                if (people[i]->type == PersonType::STUDENT) {
                    cout << "New Grade: "; cin >> static_cast<Student*>(people[i])->grade;
                } else {
                    cout << "New Subject: "; cin >> static_cast<Teacher*>(people[i])->subject;
                }
                cout << "Record updated successfully." << endl;
                return;
            }
        }
        throw runtime_error("ID not found for update.");
    }

    // DELETE
    void deletePerson(string id) {
        for (int i = 0; i < count; i++) {
            if (people[i]->id == id) {
                delete people[i];
                for (int j = i; j < count - 1; j++) {
                    people[j] = people[j + 1];
                }
                count--;
                cout << "Record deleted." << endl;
                return;
            }
        }
        throw runtime_error("ID not found for deletion.");
    }

    // FILE I/O: SAVE (WRITE)
    void saveData() const {
        ofstream outFile(filename);
        if (!outFile) {
            throw runtime_error("Error: Could not open file for writing.");
        }

        for (int i = 0; i < count; i++) {
            if (people[i]->type == PersonType::STUDENT) {
                Student* s = static_cast<Student*>(people[i]);
                outFile << "STUDENT," << s->id << "," << s->name << "," << s->age << "," << s->grade << endl;
            } else {
                Teacher* t = static_cast<Teacher*>(people[i]);
                outFile << "TEACHER," << t->id << "," << t->name << "," << t->age << "," << t->subject << endl;
            }
        }
        outFile.close();
        cout << "Data saved successfully to " << filename << endl;
    }

    // FILE I/O: LOAD (READ)
    void loadData() {
        ifstream inFile(filename);
        if (!inFile) {
            cout << "No existing data file found. Starting fresh." << endl;
            return;
        }

        string line;
        while (getline(inFile, line)) {
            stringstream ss(line);
            string type, id, name, ageStr, extra;

            // Parse comma-separated values
            getline(ss, type, ',');
            getline(ss, id, ',');
            getline(ss, name, ',');
            getline(ss, ageStr, ',');
            getline(ss, extra, ',');

            try {
                int age = stoi(ageStr);
                if (type == "STUDENT") {
                    addStudent(id, name, age, stoi(extra));
                } else if (type == "TEACHER") {
                    addTeacher(id, name, age, extra);
                }
            } catch (const exception& e) {
                cerr << "Warning: Skipping corrupted line in file." << endl;
            }
        }
        inFile.close();
        cout << "Data loaded successfully from " << filename << endl;
    }
};

int main() {
    SchoolSystem school;

    // Load data from file at program start
    school.loadData();

    int choice;
    string id, name, extra;
    int age, val;

    while (true) {
        cout << "\n--- Menu ---\n1. Add Student\n2. Add Teacher\n3. Display All\n4. Update\n5. Delete\n6. Save & Exit\nChoice: ";
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        try {
            if (choice == 1) {
                cout << "ID: "; cin >> id; cout << "Name: "; cin.ignore(); getline(cin, name);
                cout << "Age: "; cin >> age; validateAge(age);
                cout << "Grade: "; cin >> val;
                school.addStudent(id, name, age, val);
            }
            else if (choice == 2) {
                cout << "ID: "; cin >> id; cout << "Name: "; cin.ignore(); getline(cin, name);
                cout << "Age: "; cin >> age; validateAge(age);
                cout << "Subject: "; cin >> extra;
                school.addTeacher(id, name, age, extra);
            }
            else if (choice == 3) school.displayAll();
            else if (choice == 4) { cout << "ID: "; cin >> id; school.updatePerson(id); }
            else if (choice == 5) { cout << "ID: "; cin >> id; school.deletePerson(id); }
            else if (choice == 6) {
                school.saveData();
                break;
            }
            else {
                cout << "Invalid choice." << endl;
            }
        }
        // Catch any exceptions thrown during the operations
        catch (const invalid_argument& e) {
            cout << "Input Error: " << e.what() << endl;
        }
        catch (const runtime_error& e) {
            cout << "System Error: " << e.what() << endl;
        }
        catch (const exception& e) {
            cout << "An unexpected error occurred: " << e.what() << endl;
        }
    }
    return 0;
}