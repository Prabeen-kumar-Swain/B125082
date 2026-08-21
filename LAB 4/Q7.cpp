//7. Museum Exhibit Controller — Friend Class
#include <iostream>
using namespace std;

class MuseumManager;
class Exhibit {
    string name;
    int id, visitors;
    bool open;

public:
    void input() {
        cout << "Exhibit Name: ";
        cin >> name;
        cout << "Exhibit ID: ";
        cin >> id;
        cout << "Visitor Count: ";
        cin >> visitors;
        open = false;
    }

    friend class MuseumManager;
};

class MuseumManager {
public:
    void display(Exhibit e) {
        cout << "\nExhibit: " << e.name;
        cout << "\nID: " << e.id;
        cout << "\nVisitors: " << e.visitors;
        cout << "\nStatus: " << (e.open ? "Open" : "Closed");
    }

    void addVisitors(Exhibit &e, int n) {
        e.visitors += n;
    }
    void resetVisitors(Exhibit &e) {
        e.visitors = 0;
    }
    void open(Exhibit &e) {
        e.open = true;
    }
    void close(Exhibit &e) {
        e.open = false;
    }
};

int main() {
    Exhibit e;
    e.input();

    MuseumManager m;

    m.display(e);
    m.open(e);
    m.addVisitors(e, 10);

    cout << "\n\nAfter update:";
    m.display(e);
}
