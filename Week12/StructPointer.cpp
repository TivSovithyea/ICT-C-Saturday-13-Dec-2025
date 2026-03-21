#include <iostream>
using namespace std;

struct Student {
    string name;
    float gpa;
};

int main() {

    Student s1 = {"Alice", 3};
    Student* s1Ptr = &s1;

    cout << (*s1Ptr).name << endl;
    cout << s1Ptr->gpa << endl;

    s1Ptr->gpa += 0.5;
    cout << s1.gpa << endl;

    Student* p2 = new Student();
    p2->name = "Bob";
    p2->gpa += 3.8;

    cout << p2->name << endl;
    cout << p2->gpa << endl;

    delete p2;

    return 0;
}