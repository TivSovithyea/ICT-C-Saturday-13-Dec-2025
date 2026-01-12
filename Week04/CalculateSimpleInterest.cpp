#include <iostream>
using namespace std;

int main() {

    double principalAmount, simpleInterest;
    int periodTime;
    float interestRate;

    cout << "------- Calculate Simple Interest -------\n";

    cout << "Enter principal amount: ";
    cin >> principalAmount;
    cout << "Enter Time Period (In Years): ";
    cin >> periodTime;
    cout << "Enter Rate of Interest: ";
    cin >> interestRate;

    simpleInterest = (principalAmount * periodTime * interestRate) / 100;

    cout << "Simple Interest: " << simpleInterest << endl;


    return 0;
}