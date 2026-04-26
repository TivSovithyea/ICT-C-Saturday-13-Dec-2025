#include<iostream>
using namespace std;

int main() {

    try {

        int age = 15;
        if (age >= 18) {
            cout << "Access Granted";
        } else {
            throw(age);
        }

    } catch (int myNum) {
        cout << "Access Denied." << endl;
        cout << "Age is : " << myNum << endl;
    }

}