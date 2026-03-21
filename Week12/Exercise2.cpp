#include <iostream>
using namespace std;

struct Grade {
    float math;
    float science;
    float english;
};

struct Student {
    string name;
    int id;
    Grade grade;
};

int main() {

    Student student[3] = {
        {"Sopheak", 1, {120, 70, 45}},
        {"Dara", 2, {100, 75, 50}},
        {"Panha", 3, {125, 50, 35}},
    };

    int highestAvgIndex = 0;
    float highestAvg = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Name: " << student[i].name << "    Id: " << student[i].id << endl;
        float avg = (student[i].grade.math + student[i].grade.science + student[i].grade.english) / 3;
        cout << "Average: " << avg << endl;
        if (i > 0  && avg > highestAvg ) {
            highestAvg = avg;
            highestAvgIndex = i;
        } else {
            if (i==0) {
                highestAvg = avg;
            }
        }
    }

    cout << "Name: " << student[highestAvgIndex].name << "    Id: " << student[highestAvgIndex].id << endl;
    cout << "Average: " << highestAvg << endl;

}