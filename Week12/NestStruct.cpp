#include <iostream>
using namespace std;

struct Address {
    string street;
    string city;
    string country;
};

struct Student {
    string name;
    int age;
    Address addr;
};

int main() {

    Student student;
    student.name = "John";
    student.age = 18;
    student.addr.street = "Monivong";
    student.addr.city = "PhnomPenh";
    student.addr.country = "Cambodia";

    cout << student.name << endl;
    cout << student.age << endl;
    cout << student.addr.street << endl;
    cout << student.addr.city << endl;
    cout << student.addr.country << endl;

}