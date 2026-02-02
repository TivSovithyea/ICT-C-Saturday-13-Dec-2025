#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int sum = 0;

    for(int number : numbers) {
        sum += number;
    }

    cout << "Sum of numbers in the array: " << sum << endl;
}