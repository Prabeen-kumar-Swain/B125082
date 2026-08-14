//5. Dynamic Object– Book Details
#include <iostream>
#include <string>
using namespace std;

class Book {
    string bookID , bookTitle, Author;
    float price;

public:
    void input() {
        cout << "Book Id:  ";
        cin >> bookID;
        cout << "Book Title: ";
        cin >> bookTitle;
        cout << "Author:";
        cin >> Author;
        cout << "Price: Rs. ";
        cin >> price;
    }

    void display() {
        cout << "\nBook ID:  " << bookID
             << "\nBook Title: " << bookTitle
             << "\nAuthor: " << Author
             << "\nPrice: Rs. " << price <<"/-";
    }
};

int main() {
    Book *s = new Book;

    s->input();
    s->display();

    delete s;
    s = nullptr;
    return 0;
}
