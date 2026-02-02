#include <iostream>
using namespace std;

int main() {
    int foo[5] = {1, 2, 3, 0, 10};
    //{1, 2, 3, 0, 0};

    cout << "Index number 2 is: " << foo[2] << endl;
    cout << "Index number 4 is: " << foo[4] << endl;

    // foo[4] = 10;

    // //{1, 2, 3, 0, 10};

    // cout << "Index number 4 is now: " << foo[4] << endl;    

    string students[] = {"Vichai", "Kimsoung", "David"};

    cout << "Total Size of students array: " << sizeof(students) << endl;

    cout << "Total of students array: " << sizeof(students) / sizeof(students[0]) << endl;

    
}