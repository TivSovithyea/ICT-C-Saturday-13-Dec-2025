#include <iostream>
using namespace std;

int main() {

    float num, sum, avg = 0.0;
    int n, i;

    cout << "Maximum Number of inputs: " << endl;
    cin >> n;

    for (i = 1; i <= n; i++) {
        // cout << i << endl;
        cout << "Enter Number " << i << " :";
        cin >> num;

        if (num < 0) {
            goto CalculateAverage;
        }

        sum += num;

    }


    CalculateAverage:
        avg = sum / (i - 1);
        cout << avg << endl;


}