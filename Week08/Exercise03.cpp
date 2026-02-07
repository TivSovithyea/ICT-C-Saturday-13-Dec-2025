#include <iostream>
using namespace std;

int main() {

    double temperatures[7], minTemperature, maxTemperature;

    for (int i = 0; i < 7; i++) {
        cout << "Enter temperature " << i+1 << ": ";
        cin >> temperatures[i];
    }

    minTemperature = temperatures[0];
    maxTemperature = temperatures[0];

    for (int i = 1; i < 7; i++) {
        if (temperatures[i] < minTemperature) {
            minTemperature = temperatures[i];
        }

        if (temperatures[i] > maxTemperature) {
            maxTemperature = temperatures[i];
        }
    }

    cout << "Minimum Temperature: " << minTemperature << endl;
    cout << "Maximum Temperature: " << maxTemperature << endl;

    return 0;
}