#include <iostream>
using namespace std;

class Animal {
    private:
        string name;

    public:

        Animal(string name) : name(name) {}

        string getName() { return name; }

        void eat() {
            cout << name << " is eating" << endl;
        }
};

class Dog : public Animal {

    private:
        string breed;

    public:

        Dog(string n, string b) : Animal(n), breed(b) {}

        void bark() {
            cout << getName() << " is barks." << endl;
        }

        void info() {
            cout << getName() << " | " << breed << endl;
        }
};

int main() {

    Dog d("Rex", "Labrador");
    d.eat();
    d.bark();
    d.info();

}