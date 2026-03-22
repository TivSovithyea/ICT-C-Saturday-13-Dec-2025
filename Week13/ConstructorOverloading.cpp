#include <iostream>
using namespace std;

class Rectangle {
    private:
        float width;
        float height;
    public:

        Rectangle() : width(1.0), height(1.0) {}

        Rectangle(float side) : width(side), height(side) {}

        Rectangle(float w, float h) : width(w), height(h) {}

        float area() {
            return width * height;
        }

        float perim() {
            return 2 * (width + height);
        }

        void display() {
            cout << width << " " << height << endl;
        }
};

int main() {
    Rectangle r1;
    Rectangle r2(5.0);
    Rectangle r3(4.0, 6.0);

    cout << "Rectangle 1" << endl;
    cout << r1.area() << endl;
    cout << r1.perim() << endl;
    r1.display();
    cout << "Rectangle 2" << endl;
    cout << r2.area() << endl;
    cout << r2.perim() << endl;
    r2.display();
    cout << "Rectangle 3" << endl;
    cout << r3.area() << endl;
    cout << r3.perim() << endl;
    r3.display();
}