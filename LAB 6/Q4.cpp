
#include <iostream>
using namespace std;

class AccountBalance {
    double balance;

public:
    AccountBalance(double b) {
        balance = b;
    }

    AccountBalance operator-() {
        return AccountBalance(-balance);
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    AccountBalance a1(5000);
    AccountBalance a2 = -a1;

    cout << "Original account: ";
    a1.display();
    cout << "Adjusted account: ";
    a2.display();

    return 0;
}