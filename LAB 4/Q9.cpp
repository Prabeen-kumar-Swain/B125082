//9. Digital Wallet Controller — Friend Class
#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet {
    string name, status;
    float balance;

public:
    void input() {
        cout << "User Name: ";
        cin >> name;
        cout << "Wallet Balance: ";
        cin >> balance;
        status = "Active";
    }

    friend class WalletManager;
};

class WalletManager {
public:
    void display(DigitalWallet w) {
        cout << "\nUser: " << w.name;
        cout << "\nBalance: " << w.balance;
        cout << "\nStatus: " << w.status;
    }

    void addMoney(DigitalWallet &w, float x) {
        w.balance += x;
    }

    void deduct(DigitalWallet &w, float x) {
        if (x <= w.balance)
            w.balance -= x;
        else
            cout << "\nInsufficient Balance";
    }

    void disable(DigitalWallet &w) {
        w.status = "Disabled";
    }
};

int main() {
    DigitalWallet w;
    w.input();

    WalletManager m;

    m.display(w);
    m.addMoney(w, 500);
    m.deduct(w, 200);
    cout << "\n\nAfter transaction:";
    m.display(w);
    m.disable(w);
    cout << "\n\nAfter disabling:";
    m.display(w);
}
