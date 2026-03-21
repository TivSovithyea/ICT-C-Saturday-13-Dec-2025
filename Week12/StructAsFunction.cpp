#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

void promote(Student& student) {
    student.gpa += 0.5;
}

void display (Student student) {
    cout << student.name << endl;
    // student.gpa -= 1;
    cout << student.gpa << endl;
}


int main() {

    Student student1 = {"Sreyroth", 25, 4};
    Student student2 = {"Dara", 20, 3.8};
    Student student3 = {"Sokchan", 25, 3.3};

    promote(student1);
    display(student1);

    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;


    return 0;
}