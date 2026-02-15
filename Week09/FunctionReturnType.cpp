#include <iostream>
using namespace std;

int addition(int a, int b) {
    int result;
    result = a + b;
    return result;
}

int subtraction(int a, int b) {
    int result;
    result = a - b;
    return result;
}

int main() {

    int x = 5, y = 3, z;
    // z = addition(3, 5);
    // cout << "The result is : " << z << endl;

    z = subtraction(7, 2);
    cout << "The first result is : " << z << endl;

    cout << "The second result is : " << subtraction(7, 2) << endl;
    cout << "The third result is : " << subtraction(x, y) << endl;
    z = 4 + subtraction(x, y);
    cout << "The fourth result is : " << z << endl;

}