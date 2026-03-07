#include <iostream>
using namespace std;

int main() {

    string text = "hello world";
    string *pText = &text;
    *pText = "This is hello world from pointer";

    cout << text << endl;
}