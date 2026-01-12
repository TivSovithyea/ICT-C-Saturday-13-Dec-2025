#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    float radius, height;
    float volume;

    cout << "Calculate the volume of cylinder" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter the radius of the cylinder : " << endl;
    cin >> radius;
    cout << "Enter the height of the cylinder : " << endl;
    cin >> height;

    volume = PI * radius * radius * height;

    cout << "The volume of the cylinder is : " << volume << endl;

}