#include <iostream>
using namespace std;

int addition(int a, int b) {
    int result;
    result = a + b;
    return result;
}

int addition(int a, int b, int c) {
    int result;
    result = a + b + c;
    return result;
}

int addition(int a, int b, int c, int d) {
    int result;
    result = a + b + c + d;
    return result;
}

int main() {

    int num1 = 10, num2 = 20, num3 = 30, num4 = 40, result;
    result = addition(num1, num2);
    cout << "The result 1 is : " << result << endl;

    result = addition(num1, num2, num3);
    cout << "The result 2 is : " << result << endl;

    result = addition(num1, num2, num3, num4);
    cout << "The result 3 is : " << result << endl;

}