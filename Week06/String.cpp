#include <iostream>
using namespace std;

int main() {
    string firstName = "Dara ";
    string lastName = "Sok";

    // string fullName = firstName + lastName;
    string fullName = firstName.append(lastName);

    cout << fullName << endl;

    cout << "Length of fullname is : " << fullName.length() << endl;

    cout << fullName[2] << endl;
    cout << fullName[6] << endl;
}