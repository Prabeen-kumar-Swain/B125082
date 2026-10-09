
#include <iostream>
using namespace std;

class InventoryItem {
    int id, quantity;
    double price;

public:
    InventoryItem(int i, double p, int q) {
        id = i;
        price = p;
        quantity = q;
    }

    InventoryItem operator+(InventoryItem item) {
        if (id != item.id || price != item.price) {
            cout << "Incompatible items!" << endl;
            return InventoryItem(-1, 0, 0);
        }
        return InventoryItem(id, price, quantity + item.quantity);
    }

    void display() {
        if (id != -1)
            cout << "ID: " << id << ", Price: " << price
                 << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 5);
    InventoryItem i3 = i1 + i2;

    cout << "First item: ";
    i1.display();
    cout << "Second item: ";
    i2.display();
    cout << "Combined item: ";
    i3.display();

    return 0;
}