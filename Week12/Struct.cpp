#include<iostream>
using namespace std;

int main() {

    struct Student {
        string name;
        int age;
        float gpa;
    };

    Student student1 = {"Sreyroth", 25, 4};
    Student student2 = {"Dara", 20, 3.8};
    Student student3 = {"Sokchan", 25, 3.3};

    cout << student1.name << " | " << student1.age << " | " << student1.gpa << endl;
    cout << student2.name << " | " << student2.age << " | " << student2.gpa << endl;
    cout << student3.name << " | " << student3.age << " | " << student3.gpa << endl;
    // student1.name = "Sok";
    // student1.age = 18;
    // student1.gpa = 3.0;

}