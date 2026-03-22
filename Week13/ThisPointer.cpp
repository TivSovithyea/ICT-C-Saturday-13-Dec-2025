#include <iostream>
using namespace std;

class Counter {

    private:
        int count;

    public:

        Counter(int count) {
            this->count = count;
        }

        Counter& increase() {
            this->count++;
            return *this;
        }

        Counter& add(int n) {
            this->count += n;
            return *this;
        }

        void display() {
            cout << "Count: " << count << endl;
        }

};

int main() {

    Counter c(0);
    c.increase().increase().add(5).display();

}