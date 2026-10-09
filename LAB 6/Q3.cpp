#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    double price;

public:
    Book(string t, double p) {
        title = t;
        price = p;
    }

    bool operator<(Book b) {
        if (price == b.price)
            return title < b.title;
        return price < b.price;
    }
};

int main() {
    Book b1("Book 1", 450), b2("Book 2", 500);

    if (b1 < b2)
        cout << "First book is smaller";
    else
        cout << "Second book is smaller";

    return 0;
}