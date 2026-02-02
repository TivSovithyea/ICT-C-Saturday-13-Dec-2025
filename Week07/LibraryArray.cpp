#include <iostream>
using namespace std;

int main() {

    array<int, 3> numbers = {10, 20, 30};
    array<int, 3> numberIIs = {100, 200, 300};

    for(int i = 0; i < numbers.size(); i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    numbers.swap(numberIIs);

    for(int num : numbers) {
        cout << num << endl;
    }

    return 0;
}