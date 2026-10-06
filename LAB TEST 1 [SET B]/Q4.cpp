#include <iostream>
using namespace std;

class Inventory {

    int playerID;
    int items;
    int *quantity;

public:

    Inventory(int id, int n) {           // parameterized constructor
        playerID = id;
        items = n;

        quantity = new int[items];

        for (int i = 0; i < items; i++)
            quantity[i] = 0;
    }

    void enterQuantity() {
        cout << "Enter quantities of items:\n";

        for (int i = 0; i < items; i++)
            cin >> quantity[i];
    }

    void display() {
        cout << "Player ID: " << playerID << endl;

        cout << "Item quantities: ";

        for (int i = 0; i < items; i++)
            cout << quantity[i] << " ";

        cout << endl;
    }

    
    friend class GameController;

    ~Inventory() {
        delete[] quantity;
    }
};

class GameController {

public:

    void changeQuantity(Inventory &inv, int position, int newQuantity) {

        if (position >= 0 && position < inv.items) {

            inv.quantity[position] = newQuantity;

            cout << "Quantity changed successfully.\n";
        }
        else {
            cout << "Invalid item position.\n";
        }
    }
};

int main() {

    int playerID, n;

    cout << "Enter player ID: ";
    cin >> playerID;

    cout << "Enter number of items: ";
    cin >> n;

    
    Inventory *inv = new Inventory(playerID, n);

    inv->enterQuantity();

    cout << "\nBefore modification:\n";
    inv->display();

    GameController controller;

    int position, newQuantity;

    cout << "\nEnter item position and new Quantity: ";
    cin >> position >> newQuantity;

    controller.changeQuantity(*inv, position, newQuantity);

    cout << "\nAfter modification:\n";
    inv->display();

    delete inv;
    inv = nullptr;
    
    return 0;
}