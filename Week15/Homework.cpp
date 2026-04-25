#include <iomanip>
#include <iostream>
using namespace std;

class Sharp {
    protected:
        string color;
    public:
        Sharp(string c) : color(c) {}
        Sharp() {
            color = "";
        }

        void setColor(string c) {
            color = c;
        }

        string getColor() {
            return color;
        }

        double area() {
            return 0.0;
        }
};

class Circle : public Sharp{
    private:
        double radius;

    public:
        Circle(string c, double r) : Sharp(c) {
            // color = c;
            radius = r;
        }

        double area() {
        return 3.14 * radius * radius;
    }

    void display() {
        cout << "Circle Information" << endl;
        cout << "Color: " << color << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "-----------------------------" << endl;
    }
};

class Rectangle : public Sharp {
    private:
        double width;
        double height;

    public:
        Rectangle(string c, double w, double h) : Sharp(c) {
            width = w;
            height = h;
        }
        double area() {
            return width * height;
        }
        void display() {
            cout << "Rectangle Information" << endl;
            cout << "Color: " << color << endl;
            cout << "Width: " << width << endl;
            cout << "Height: " << height << endl;
            cout << "Area: " << area() << endl;
            cout << "-----------------------------" << endl;
        }
};

class Triangle : public Sharp {
    private:
        double a, b, c;
    public:
        Triangle(string color, double a, double b, double c) : Sharp(color) {
            this->a = a;
            this->b = b;
            this->c = c;
        }
        double area() {
            double s = (a + b + c) / 2;
            double area = sqrt(s * (s - a) * (s - b) * (s - c));

            return  area;
        }
        void display() {
            cout << "Triangle Information" << endl;
            cout << "Color: " << color << endl;
            cout << "A: " << a << endl;
            cout << "B: " << b << endl;
            cout << "C: " << c << endl;
            cout << "Area: " << fixed << setprecision(2) << area() << endl;
            cout << "-----------------------------" << endl;
        }
};

int main() {

    Circle circle("Red", 10);
    circle.display();
    Rectangle rectangle("Blue", 100, 20);
    rectangle.display();
    Triangle triangle("Green", 7, 8, 9);
    triangle.display();

    Sharp sharps[4];
    sharps[0].setColor("Red");
    sharps[1].setColor("Blue");
    sharps[2].setColor("Green");
    sharps[3].setColor("Gray");
    for (int i = 0; i < 4; i++) {
        cout << sharps[i].getColor() << endl;
        cout << sharps[i].area() << endl;
    }

}