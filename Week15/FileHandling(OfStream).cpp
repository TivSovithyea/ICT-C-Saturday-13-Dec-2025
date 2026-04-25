#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream MyFile("student_data.txt");
    MyFile << "Dara Sok - Score = 95";
    MyFile.close();

    cout << "Write File Successfully";

    return 0;

}