#include <iostream>
using namespace std;

class Animal {
    public:
        string name;

        void eat() {
            cout << name << " is eating." << endl;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << name << " is woof!" << endl;
        }
};

class Cat : public Animal {
    public:
        void meow() {
            cout << name << " is meow!" << endl;
        }
};

int main() {
    Dog dog;
    Cat cat;
    dog.name = "Dudu";
    cat.name = "Neko";

    cout << dog.name << endl;
    cout << cat.name << endl;
    dog.eat();
    cat.eat();
    dog.bark();
    cat.meow();

}