#include <iostream>
using namespace std;

int main() {

    float sideLength;
    float volume;

    cout << "\t\tCalculate the Volume of Cube\n";

    cout << "Please enter Side Length : ";
    cin >> sideLength;

    volume = sideLength * sideLength * sideLength;

    cout << "The volume of cube is : " << volume << endl;

}
