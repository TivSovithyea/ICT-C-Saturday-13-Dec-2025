#include <iostream>
using namespace std;

class Flyable {
    public:
        void fly() {
            cout << "Flying!" << endl;
        }
};

class Swimmable {
    public:
        void swim() {
            cout << "Swimming!" << endl;
        }
};

class Duck : public Flyable, public Swimmable {
    public:
     void quack() {
         cout << "Quack!" << endl;
     }
};

int main() {

    Duck duck;
    duck.quack();
    duck.fly();
    duck.swim();

    return 0;
}