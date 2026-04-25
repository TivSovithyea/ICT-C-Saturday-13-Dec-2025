#include<iostream>
#include<fstream>
using namespace std;

int main() {

    string text;

    ifstream myfile("student_data.txt");

    while (getline(myfile, text)) {
        cout << text << endl;
    }

    myfile.close();
    return 0;
}