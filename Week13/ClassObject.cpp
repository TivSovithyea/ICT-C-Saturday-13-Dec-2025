#include <iostream>
using namespace std;

class Car {

    private:
        string brand;
        int year;
        float price;

    public:
        void setDetail(string b, int y, float p) {
            brand = b;
            year = y;
            price = p;
        }
        void display() {
            cout << brand << " (" << year << ") $" << price << endl;
        }
};

int main() {

    Car car1;
    Car car2;

    car1.setDetail("Toyota", 2010, 25000);
    car2.setDetail("BMW", 2013, 30000);
    car1.display();
    car2.display();


    return 0;
}