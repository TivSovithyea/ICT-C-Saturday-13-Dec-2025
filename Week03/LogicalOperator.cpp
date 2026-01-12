#include <iostream>
using namespace std;

int main() {

    // Declare Variable
    int a = 5;
    int b = 9;

    // Logical And

    cout << "This is Logical And Demo" << endl;

    bool result, firstLogic, secondLogic;

    // false and False = False
    firstLogic = (a == b);
    secondLogic = (a > b);
    result = (firstLogic && secondLogic);
    cout << result << endl;

    // False and True = False
    firstLogic = (a > 6);
    secondLogic = (b > 8);
    result = (firstLogic && secondLogic);
    cout << result << endl;

    // True and False = False
    firstLogic = (a < 6);
    secondLogic = (b < 8);
    result = (firstLogic && secondLogic);
    cout << result << endl;

    // True and True = True
    firstLogic = (a == 5);
    secondLogic = (b == 9);
    result = (firstLogic && secondLogic);
    cout << result << endl;

    // Logical And

    cout << "This is Logical Or Demo" << endl;

    // false and False = False
    firstLogic = (a == b);
    secondLogic = (a > b);
    result = (firstLogic || secondLogic);
    cout << result << endl;

    // False and True = False
    firstLogic = (a > 6);
    secondLogic = (b > 8);
    result = (firstLogic || secondLogic);
    cout << result << endl;

    // True and False = False
    firstLogic = (a < 6);
    secondLogic = (b < 8);
    result = (firstLogic || secondLogic);
    cout << result << endl;

    // True and True = True
    firstLogic = (a == 5);
    secondLogic = (b == 9);
    result = (firstLogic || secondLogic);
    cout << result << endl;
}