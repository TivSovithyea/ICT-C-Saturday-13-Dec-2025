#include <iostream>
using namespace std;

class Car {
    private:
        string brand;
        int year;

    public:
        void setDetails(string b, int y);
        void display();
};

void Car::setDetails(string b, int y) {
    brand = b;
    year = y;
}

void Car::display() {
    cout << brand << " (" << year << ") " << endl;
}
