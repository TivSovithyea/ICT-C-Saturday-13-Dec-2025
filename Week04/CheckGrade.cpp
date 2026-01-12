#include <iostream>
using namespace std;

int main() {

    double score;
    char grade;

    cout << "Please enter your score: ";
    cin >> score;

    if (score >= 95 && score <= 100 ) {
        grade = 'A';
        cout << "Your grade is " << grade << endl;
    } else if (score >= 85 && score < 95 ) {
        grade = 'B';
        cout << "Your grade is " << grade << endl;
    } else if (score >= 75 && score < 85 ) {
        grade = 'C';
        cout << "Your grade is " << grade << endl;
    } else if (score >= 65 && score < 75 ) {
        grade = 'D';
        cout << "Your grade is " << grade << endl;
    } else if (score >= 50 && score < 65 ) {
        grade = 'E';
        cout << "Your grade is " << grade << endl;
    } else if (score >= 0 && score < 50 ) {
        grade = 'F';
        cout << "Your grade is " << grade << endl;
    } else {
        cout << "You entered an invalid score.\n";
    }

    return 0;
}