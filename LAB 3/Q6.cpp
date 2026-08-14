//6. Dynamic Array of Objects– Product Details
#include <iostream>
using namespace std;

class Product {
    int id, qty;
    string name;
    float price;

public:
    void input() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter the Price: ";
        cin >> price;
        cout << "Enter the quantity of Product: ";
        cin >> qty;
    }

    void display() {
        cout <<"Product ID : "<< id << endl
            << "Product Name : " << name << endl
            << "Product Price : "<< price <<endl
            << "Product Quantity : "<< qty << endl << endl;
    }

    double cost() {
        return price * qty;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product *p = new Product[n];
    float total = 0;

    for(int i = 0; i < n; i++) {
        p[i].input();
        total += p[i].cost();
    }

    cout << "\nProducts:\n";
    for(int i = 0; i < n; i++) p[i].display();

    cout << "Total Amount: Rs." << total << "/-";

    delete[] p;
    p = nullptr;
    return 0;
}
