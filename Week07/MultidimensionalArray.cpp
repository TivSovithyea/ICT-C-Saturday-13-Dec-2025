#include <iostream>
using namespace std;

int main() {

    int x[3][2] = {
        {0, 1},
        {2, 3},
        {4, 5}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {

        //i = 0, j = 0 -> x[0][0] = 0
        //i = 0, j = 1 -> x[0][1] = 1
        //i = 1, j = 0 -> x[1][0] = 2
        //i = 1, j = 1 -> x[1][1] = 3
        //i = 2, j = 0 -> x[2][0] = 4
        //i = 2, j = 1 -> x[2][1] = 5

            cout << "x[" << i << "][" << j << "] = " << x[i][j] << endl;
        }
    }
}