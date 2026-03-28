#include <iostream>
using namespace std;

class Product {
    private:
        string name;
        float price;
        int stock;
        string sku;

    public:

    Product(string name, float price, int stock, string sku) {
        this->name = name;
        if (price < 0) throw range_error("Price cannot be negative");
        this->price = price;
        if (stock < 0) throw range_error("Stock cannot be negative");
        this->stock = stock;
        this->sku = sku;
        cout << "Create Product " << name << endl;
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

    string getSku() {
        return this->sku;
    }

    Product& setPrice(float price) {
        if (price < 0) throw range_error("Price cannot be negative");
        this->price = price;
        return *this;
    }

    Product& setStock(int stock) {
        if (stock < 0) throw range_error("Stock cannot be negative");
        this->stock = stock;
        return *this;
    }

    bool sell(int qty) {
        if (qty > this->stock) return false;
        this->stock -= qty;
        cout << "Sold " << qty << " units." << endl;
        return true;
    }

    void restock(int qty) {
        if (qty < 0) throw range_error("Stock cannot be negative");
        this->stock += qty;
    }

    void display() {

        cout << "Name: " << this->name << endl;
        cout << "Price: " << this->price << endl;
        cout << "Stock: " << this->stock << endl;
        cout << "Sku: " << this->sku << endl;
        string stockStatus = this->stock == 0 ? "Out of Stock" : "In Stock";
        cout << "Stock Status: " << stockStatus << endl;
    }
};


int main() {

    Product product("Iphone 13", 450, 5, "IP13");
    product.display();
    product.sell(2);
    product.display();
    product.setPrice(-5);

    return 0;
}