#include <iostream>
using namespace std;

int main() {

    int myNum = 5;
    float myFloatNum = 5.99;
    double myDoubleNum = 9.98;
    char myLetter = 'C';
    bool myBoolean = true;
    string myString = "Hello  World";

    cout << "int: " << myNum << endl;
    cout << "int size: " << sizeof(myNum) << endl;
    cout << "float: " << myFloatNum << endl;
    cout << "float size: " << sizeof(myFloatNum) << endl;
    cout << "double: " << myDoubleNum << endl;
    cout << "double size: " << sizeof(myDoubleNum) << endl;
    cout << "char: " << myLetter << endl;
    cout << "char size: " << sizeof(char) << endl;
    cout << "bool: " << myBoolean << endl;
    cout << "bool size: " << sizeof(myBoolean) << endl;
    cout << "string: " << myString << endl;
    // cout << "string size: " << myString.size() << endl;

    return 0;
}