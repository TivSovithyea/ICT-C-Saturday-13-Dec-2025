#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
        float gpa;

    public:
        Student() {
            name = "Unknown";
            age = 0;
            gpa = 0.0;
            cout << "Student Created Default" << endl;
        }

        Student(string n, int a, float g) {
            name = n;
            age = a;
            gpa = g;
            cout << "Student Created " << name << endl;
        }

        void display() {
            cout << "Name: " << name << " Age: " << age << " GPA: " << gpa << endl;
        }
};

int main() {

    Student s1("Dara Sok", 18, 3.5);
    Student s2("Vuth", 25, 3.2);
    Student s3;
    s1.display();
    s2.display();
    s3.display();

}