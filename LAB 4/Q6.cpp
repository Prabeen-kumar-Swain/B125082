//6. Printer Control System — Friend Class
#include <iostream>
using namespace std;

class PrinterManager;

class Printer {
    string name;
    int pages, ink;
    bool power;

public:
    void input() {
        cout << "Printer Name: ";
        cin >> name;
        cout << "Pages Printed: ";
        cin >> pages;
        cout << "Ink Level: ";
        cin >> ink;
        power = false;
    }

    Printer(const Printer &p) {
        name = p.name;
        pages = p.pages;
        ink = p.ink;
        power = p.power;
    }

    friend class PrinterManager;
};

class PrinterManager {
public:
    void display(Printer p) {
        cout << "\nPrinter: " << p.name;
        cout << "\nPages: " << p.pages;
        cout << "\nInk: " << p.ink << "%";
        cout << "\nPower: " << (p.power ? "ON" : "OFF");
    }

    void on(Printer &p) {
        p.power = true;
    }

    void off(Printer &p) {
        p.power = false;
    }

    void checkInk(Printer p) {
        cout << "\nInk Level: " << p.ink << "%";
    }

    void resetPages(Printer &p) {
        p.pages = 0;
    }
};

int main() {
    Printer p;
    p.input();

    PrinterManager m;

    m.display(p);
    m.on(p);
    cout << "\n\nAfter turning ON:";
    m.display(p);
    m.checkInk(p);
    m.resetPages(p);

    cout << "\nPages reset.";
}
