#include <iostream>
using namespace std;

class Product {
    private:
        string name;
        float price;
        int stock;
    public:
        Product(string name, float price, int stock) : name(name), price(price), stock(stock) {}

        Product& setPrice(float price) {
            if (price < 0) throw range_error("Negative price");
            this->price = price;
            return *this;
        }

        Product& setStock(int stock) {
            if (stock < 0) throw range_error("Negative stock");
            this->stock = stock;
            return *this;
        }

        string getName() {
            return this->name;
        }
        float getPrice() {
            return this->price;
        }
        int getStock() {
            return this->stock;
        }

};

int main() {

    Product product1("Laptop", 790, 5);
    cout << product1.getName() << " | " << product1.getStock() << endl;

    product1.setPrice(775).setStock(100);
    cout << product1.getName() << " | " << product1.getStock() << endl;


    return 0;
}