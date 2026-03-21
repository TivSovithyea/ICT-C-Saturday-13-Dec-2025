#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    float price;
};

int main() {

    Book book1;
    book1.title = "C++ Programming";
    book1.author = "Bjarne StrouStrup";
    book1.year = 2013;
    book1.price = 49.99;

    cout << book1.title << " by " << book1.author << "\n";
    cout << "Year: " << book1.year << " $" << book1.price << "\n";

    Book book2;
    book2.title = "C# Programming";
    book2.author = "Microsoft";
    book2.year = 2013;
    book2.price = 99.99;

    cout << book2.title << " by " << book2.author << "\n";
    cout << "Year: " << book2.year << " $" << book2.price << "\n";

}