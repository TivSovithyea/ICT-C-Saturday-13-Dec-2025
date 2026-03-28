#include <iostream>
using namespace std;

class Animal {
    public:
        string name;
};

class Dog : public Animal {
    public:
        void printName() {
            cout << name << endl;
        }
};

class SubDog : public Dog {
    public:
        void printName() {
            cout << name << endl;
        }
};

int main() {

    Dog dog;
    dog.name = "Dog";
}