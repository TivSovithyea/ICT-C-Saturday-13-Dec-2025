#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int id;
        float gpa;

    public:

    Student() {
        this->name = "No Name";
        this->id = 0;
        this->gpa = 0;
    }

    Student(string name, int id, float gpa) {
        this->name = name;
        this->id = id;
        this->gpa = gpa;
        cout << "Student Created " << this->name << endl;
    }

    Student(const Student &student) {
        this->name = student.name;
        this->id = student.id;
        this->gpa = student.gpa;
        cout << "Copied : " << student.name << endl;
    }

    ~Student() {
        cout << "Student " << name << " removed!" << endl;
    }

    string getName() {
        return this->name;
    }

    int getId() {
        return this->id;
    }

    float getGpa() {
        return this->gpa;
    }

    void display() {
        cout << "Student " << this->name << endl;
        cout << "ID: " << this->id << endl;
        cout << "GPA: " << this->gpa << endl;
    }

    string isHonors() {
        return this->gpa >= 3.5 ? "Yes" : "No";
    }

};

int main() {

    Student student1 = Student("Lika", 3, 3.1);
    student1.display();
    cout << "Honors: " << student1.isHonors() << endl;
    Student student2 = Student(student1);
}