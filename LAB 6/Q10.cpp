
#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;

public:
    Bill(int i, double a) {
        items = i;
        amount = a;
    }

    Bill operator+(Bill b) {
        return Bill(items + b.items, amount + b.amount);
    }

    bool operator>(Bill b) {
        return amount > b.amount;
    }

    void display() {
        cout << "Items: " << items
             << ", Total amount: " << amount << endl;
    }
};

int main() {
    Bill b1(3, 500), b2(2, 300);
    Bill b3 = b1 + b2;

    cout << "First bill: ";
    b1.display();

    cout << "Second bill: ";
    b2.display();

    cout << "Combined bill: ";
    b3.display();

    cout << "First bill > Second bill: "
         << (b1 > b2) << endl;

    return 0;
}