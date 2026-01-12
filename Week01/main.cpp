#include <iostream>
using namespace std;

int main() {

    //Declare variables
    int x, y, sum;
    //Output Please enter a Number
    cout << "Please enter a number: ";
    //Handle User Input and assign to variable x
    cin >> x;
    //Output Please enter another Number
    cout << "Please enter another number: ";
    //Handle User Input and assign to variable y
    cin >> y;

    /*
        This is sum of x and Y

        and OutPut The sum
    */


    sum = x + y;
    cout << "The sum is: " << sum << endl;
    return 0;
}