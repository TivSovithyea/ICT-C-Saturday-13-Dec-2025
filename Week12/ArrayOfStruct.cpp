#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

int main() {

    Student student[5] = {
        {"Dara", 20, 3.4},
        {"Sereyroth", 25, 3.1},
        {"Sopheap", 20, 4}
    };

    cout << student[0].name << endl;
    cout << student[1].name << endl;

}