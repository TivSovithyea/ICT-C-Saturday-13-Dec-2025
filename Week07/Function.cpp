#include<iostream>
using namespace std;

void printHelloWorld() {
    cout << "Hello World!" << endl;
}

void printText(string text) { //dynimic text input
    // cout << "Hello My Friend!" << endl;
    cout << text << endl;
}

int main() {
    // printHelloWorld();
    // printHelloWorld();
    // printHelloWorld();
    // printHelloWorld();

    printText("Hello My Friend!");

    printText("My name is John Doe.");

    printText("Testing 1 2 3...");
    return 0;
}