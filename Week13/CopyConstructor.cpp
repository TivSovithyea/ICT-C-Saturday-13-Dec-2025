#include <iostream>
using namespace std;



class Student {
private:
    string name;
    float gpa;

public:

    Student(string n, float g) {
        name = n;
        gpa = g;
        cout << "Student Created " << name << endl;
    }

    Student(const Student& other) {
        name = other.name;
        gpa = other.gpa;
        cout << "Student Copied " << name << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
    }

};

int main() {

    Student s1("Sreypov", 3.5);
    Student s2 = s1;
    Student s3(s1);
    s2.display();
    s3.display();
}
